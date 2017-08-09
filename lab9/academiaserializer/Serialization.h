//
// Created by radligna on 08.05.17.
//

#ifndef JIMP_EXERCISES_SERIALIZATION_H
#define JIMP_EXERCISES_SERIALIZATION_H

#include <string>
#include <iostream>
#include <sstream>
#include <functional>
#include <vector>
#include <initializer_list>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::stringstream;
using std::reference_wrapper;


namespace academia {

    /*
    class Serializable  {
    public:
        //virtual void Serialize (Serializer *cos ) = 0;

    };

    class Serializer  {

    private:
        Serializable *serializable;

    public:
        Serializer(Serializable &serializable_) : serializable{&serializable_} {}
        operator Serializable&() {
            return *serializable;
        }

        Serializer(){};
        Serializer(std::ostream *out);

        std::ostream *out;


        virtual void IntegerField(const std::string &field_name, int value);
        virtual void DoubleField(const std::string &field_name, double value) = 0;
        virtual void StringField(const std::string &field_name, const std::string &value) = 0;
        virtual void BooleanField(const std::string &field_name, bool value) = 0;
        virtual void SerializableField(const std::string &field_name, const academia::Serializable &value) = 0;
        virtual void ArrayField(const std::string &field_name,
                        const vector<reference_wrapper<const academia::Serializable>> &value) = 0;
        virtual void Header(const std::string &object_name) = 0;
        virtual void Footer(const std::string &object_name) = 0;

    };



    class Room : public Serializable {
    public:
        void Serialize(Serializer * cos);
        enum class Type {
            COMPUTER_LAB
        };
        Room (int room_nr, string another_room_nr_xD, Room::Type type);

    private:
        Serializer *serializable;

    public:


        Room(Serializer &serializable_) : serializable{&serializable_} {}
        operator Serializer&() {
            return *serializable;
        }
    };

     */
    class Serializer;
    class Room;
    class Building;

    class Serializable {
    public:
        virtual void Serialize(Serializer *) const =0;
    };

    class Serializer {
    public:
        Serializer(std::ostream *out);
        Serializer(){};

        virtual void IntegerField(const std::string &field_name, int value) {
            number = value;
        }
        virtual void DoubleField(const std::string &field_name, double value) {
            *out << value;
        }
        virtual void StringField(const std::string &field_name, const std::string &value) {
            name = value;
        }
        virtual void BooleanField(const std::string &field_name, bool value) {
            *out << value;
        }

        virtual void SerializableField(const std::string &field_name, const academia::Serializable &value){};

        virtual void ArrayField(const std::string &field_name,
                        const vector<reference_wrapper<const academia::Serializable>> &value) {};
        virtual void Header(const std::string &object_name) {
            header = object_name;
        }
        virtual void Footer(const std::string &object_name) {
            footer = object_name;
        }

        int number;
        string name;
        string type;
        string header;
        string footer;
        std::ostream *out;


    };



    class JsonSerializer : public Serializer{
    public:
        JsonSerializer(stringstream *o) {out = o;};
        virtual void IntegerField(const std::string &field_name, int value) {
            *out << "{\"" << field_name << "\": " << std::to_string(value) ;
        }
        virtual void DoubleField(const std::string &field_name, double value) {
            *out << value;
        }
        virtual void StringField(const std::string &field_name, const std::string &value) {
            *out << ", \"" << field_name << "\": \"" << value << "\"" ;
        }
        virtual void BooleanField(const std::string &field_name, bool value) {
            *out << value;
        }

        virtual void SerializableField(const std::string &field_name, const academia::Serializable &value){};

        virtual void ArrayField(const std::string &field_name,
                                const vector<reference_wrapper<const academia::Serializable>> &value) {
            *out << ", \"" << field_name << "\": [";
            if (value.size() == 0) {
                *out << "]";
            } else {
                int i=1;
                for (const Serializable &el : value) {
                    el.Serialize(this);
                    if (i < value.size())
                        *out<< ", ";
                    i++;
                }

                *out << "]";
            }


        };
        virtual void Header(const std::string &object_name) {
            header = object_name;
        }
        virtual void Footer(const std::string &object_name) {
            footer = object_name;
            *out << "}" ;
        }

        stringstream *out;

    };


    class XmlSerializer : public Serializer{
    public:
        XmlSerializer(stringstream *o) {out = o;};
        virtual void IntegerField(const std::string &field_name, int value) {
            *out << "<" << field_name << ">" << std::to_string(value) << "<\\" << field_name << ">" ;
        }
        virtual void DoubleField(const std::string &field_name, double value) {
            *out << value;
        }
        virtual void StringField(const std::string &field_name, const std::string &value) {
            *out << "<" << field_name << ">" << value << "<\\" << field_name << ">" ;
        }
        virtual void BooleanField(const std::string &field_name, bool value) {
            *out << value;
        }

        virtual void SerializableField(const std::string &field_name, const academia::Serializable &value){};

        virtual void ArrayField(const std::string &field_name,
                                const vector<reference_wrapper<const academia::Serializable>> &value) {
            *out << "<" << field_name << ">";
            if (value.size() == 0) {
                *out << "<\\rooms>";
            } else {
                for (const Serializable &el : value) {
                    el.Serialize(this);
                }

                *out << "<\\rooms>";
            }


        };
        virtual void Header(const std::string &object_name) {
            *out << "<" << object_name << ">";
        }
        virtual void Footer(const std::string &object_name) {
            *out << "<\\" << object_name << ">";
        }

        stringstream *out;

    };


    class Room : public Serializable {
    public:

        enum class Type {
            COMPUTER_LAB,
            LECTURE_HALL,
            CLASSROOM
        };

        Room(int num, string nam, Room::Type typ);
        void Serialize(Serializer *) const;

        Type type_field;
        int number;
        string name;
    };

    class Building : public Serializable {
    public:
        Building(int num, string nam, vector<Room> ru);
        void Serialize(Serializer *) const;

        int number;
        string name;
        vector <Room> rooms;
        //std::vector<std::reference_wrapper<const Serializable>> bases;
    };


    class BuildingRepository {

    };

}

#endif //JIMP_EXERCISES_SERIALIZATION_H

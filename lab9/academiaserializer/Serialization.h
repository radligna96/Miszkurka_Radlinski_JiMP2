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

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::stringstream;
using std::reference_wrapper;


namespace academia {

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


}

#endif //JIMP_EXERCISES_SERIALIZATION_H

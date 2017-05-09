//
// Created by miszk on 5/8/2017.
//

#ifndef JIMP_EXERCISES_SERIALIZATION_H
#define JIMP_EXERCISES_SERIALIZATION_H

#include <string>
#include "iostream"
using std::string;
using std::cout;

namespace academia {
    class Serializer {
    public:


    };

    class XmlSerializer : Serializer{
    public:
        void Serialize(Serializer &ser){serializer = &ser;}
        operator Serializer&() {
            return *serializer;
        }

        Serializer *serializer;
    };

    class Room : public XmlSerializer{


    };

    enum class Type : public Room {
        LECTURE_HALL,
        CLASSROOM,
        COMPUTERLAB
    };


}

#endif //JIMP_EXERCISES_SERIALIZATION_H

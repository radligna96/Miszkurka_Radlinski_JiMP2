//
// Created by radligna on 08.05.17.
//

#include "Serialization.h"
using namespace academia;
/*
academia::Serializer::Serializer(std::ostream *out) {
this->out = out;
}

void academia::Serializer::IntegerField(const std::string &field_name, int value) {
*out << value;
}

void academia::Room::Serialize(academia::Serializer *cos) {

}

academia::Room::Room(int room_nr, string another_room_nr_xD, academia::Room::Type type) {

}
*/
academia::Serializer::Serializer(std::ostream *out) {
    this->out = out;
}

std::string TypeToString(Room::Type type) {
    switch(type) {
        case Room::Type::COMPUTER_LAB:
            return "COMPUTER_LAB";
        case Room::Type::CLASSROOM:
            return "CLASSROOM";
        case Room::Type::LECTURE_HALL:
            return "LECTURE_HALL";
    }
}

void academia::Room::Serialize(academia::Serializer *ser) const {
    ser->Header("room");
    ser->IntegerField("id", number);
    ser->StringField("name", name);
    ser->StringField("type", TypeToString(type_field));
    ser->Footer("room");
}

Room::Room(int num, string nam, Room::Type typ) {
    number = num;
    name = nam;
    type_field = typ;
}

Building::Building(int num, string nam, vector<Room> ru) {
    number = num;
    name = nam;
    rooms = ru;

}

void Building::Serialize(Serializer * ser) const{
    ser->Header("building");
    ser->IntegerField("id",number);
    ser->StringField("name", name);
    std::vector<std::reference_wrapper<const Serializable>> bases;
    for (const Room & room : rooms) {  // tu musi bys const & bo inaczej wszysctkie obiekty w bases bd tym ostatnim...
        bases.emplace_back(room);
    }

    ser->ArrayField("rooms", bases);
    ser->Footer("building");
}

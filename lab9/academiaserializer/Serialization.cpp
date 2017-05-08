//
// Created by radligna on 08.05.17.
//

#include "Serialization.h"

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

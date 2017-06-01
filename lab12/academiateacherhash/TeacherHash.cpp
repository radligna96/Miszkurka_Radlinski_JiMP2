//
// Created by miszk on 6/1/2017.
//

#include "TeacherHash.h"

academia::TeacherId::TeacherId(int id_) {
    id = id_;
}

academia::Teacher::Teacher(academia::TeacherId id_, string name_, string department_) {
    id = id_;
    name = name_;
    department = department_;
}

int academia::Teacher::Id() {
    return id.id;
}

string academia::Teacher::Name() {
    return name;
}

string academia::Teacher::Department() {
    return department;
}

size_t academia::TeacherHash::operator()(const academia::Teacher &teacher) const {
    size_t h_n = std::hash<string>{}(teacher.name);
    size_t h_d = std::hash<string>{}(teacher.department);
    size_t h_id = std::hash<int>{}(teacher.id.id);
    return h_d + h_n + h_id;
}

size_t academia::TeacherHash::operator()() const {
    size_t h_n = std::hash<string>{}(teacher.name);
    size_t h_d = std::hash<string>{}(teacher.department);
    size_t h_id = std::hash<int>{}(teacher.id.id);
    return h_d + h_n + h_id;
}

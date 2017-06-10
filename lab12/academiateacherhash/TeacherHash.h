//
// Created by miszk on 6/1/2017.
//

#ifndef JIMP_EXERCISES_TEACHERHASH_H
#define JIMP_EXERCISES_TEACHERHASH_H

#include "string"
#include <functional>
#include <initializer_list>
using std::string;

namespace academia {

    class TeacherId {
    public:
        TeacherId(){};
        TeacherId(int id_);

        operator int() const{ //ze nie wieszczy pierwszy int powinien byc
            return id;
        }

        int id;
    };


    class Teacher {
    public:
        Teacher(TeacherId id_, string name_, string department_);
        Teacher(){};

        ~Teacher(){};
        int Id();
        string Name();
        string Department();

        TeacherId id;
        string name;
        string department;

        bool operator==(Teacher other) const {
            return (id.id==other.id.id && name==other.name && department==other.department);
        }

        bool operator!=(Teacher other) const {
            return (id.id!=other.id.id || name!=other.name || department!=other.department);
        }



    };

    class TeacherHash {
    public:
        TeacherHash(){};
        TeacherHash(Teacher teacher_){
            teacher.id.id = teacher_.id.id;
            teacher.department = teacher_.department;
            teacher.name = teacher_.name;
        };
        TeacherHash(std::initializer_list<Teacher> o){};

        size_t operator()(const Teacher &teacher) const;

        size_t operator()() const;
        Teacher teacher;
    };


    template <class T,class U>
    bool operator== ( U other , T yet_another) {
        return int(other) == int(yet_another);
    }

    template <class T,class U>
    bool operator!= ( U other , T yet_another) {
        return int(other) != int(yet_another);
    }
}




#endif //JIMP_EXERCISES_TEACHERHASH_H

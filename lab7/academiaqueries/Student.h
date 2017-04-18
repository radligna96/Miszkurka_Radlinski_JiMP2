//
// Created by miszagni on 04.04.17.
//

#ifndef JIMP_EXERCISES_STUDENT_H
#define JIMP_EXERCISES_STUDENT_H

#include <iostream>
#include <string>
#include <iomanip>
#include "StudyYear.h"
#include <initializer_list>

using std::initializer_list;
using std::string;
using std::istream;

namespace academia{
    class Student{
    public:
        Student();
        Student(string id_, string name_, string last_name_, string program_, int year_):
                id(id_), name(name_),
                last_name(last_name_),
                program(program_),
                year(year_){};
        ~Student(){};
        StudyYear year;
        string name;
        string last_name;
        string program;
        string id;
    };

    std::ostream & operator <<( std::ostream & s, const Student & v );
}



#endif //JIMP_EXERCISES_STUDENT_H


//[1 plus] zdefiniować operator ++ i -- pre(in|de)krementacji dla StudyYear

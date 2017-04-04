//
// Created by miszagni on 04.04.17.
//

#ifndef JIMP_EXERCISES_STUDENT_H
#define JIMP_EXERCISES_STUDENT_H

#include <iostream>
#include <string>
#include <iomanip>

using std::string;
using std::istream;

class StudyYear{
public:
    StudyYear()
    {
        this->year = 0;
    }
    StudyYear( int x)
    {
        this->year = x;
    }
    ~StudyYear(){};
    void SetYear(int y);

    StudyYear & operator++();
    StudyYear & operator--();
    int year;
};

class Student{
public:

    StudyYear year;
    string last_name;
    string program;
    string id;
};

istream& operator>>(istream & input, StudyYear& y);
std::ostream & operator <<( std::ostream & s, const Student & v );
#endif //JIMP_EXERCISES_STUDENT_H


//[1 plus] zdefiniować operator ++ i -- pre(in|de)krementacji dla StudyYear

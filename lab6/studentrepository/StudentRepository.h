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
using std::cout;
using std::endl;

namespace academia {



    class StudyYear  {
    public:
        StudyYear();

        StudyYear(int x);

        ~StudyYear() ;

        void SetYear(int y);

        StudyYear &operator++();

        StudyYear &operator--();

        int study_year;
    };

    class Student {
    public:
        Student();
        Student(string id_, string firstName_, string lastName_, string program_, int year_);
        ~Student();

        StudyYear year;
        string firstName;
        string lastName;
        string program;
        string id;

        string Program();
        string LastName();
        string FirstName();
        StudyYear Year();
        string Id();

        void ChangeLastName(string newLastName);
    };


    istream &operator>>(istream &input, StudyYear &y);

    std::ostream &operator<<(std::ostream &s, const Student &v);
}

#endif //JIMP_EXERCISES_STUDENT_H


//[1 plus] zdefiniować operator ++ i -- pre(in|de)krementacji dla StudyYear

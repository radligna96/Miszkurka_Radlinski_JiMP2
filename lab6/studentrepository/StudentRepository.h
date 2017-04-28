//
// Created by miszagni on 04.04.17.
//

#ifndef JIMP_EXERCISES_STUDENT_H
#define JIMP_EXERCISES_STUDENT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using std::string;
using std::istream;
using std::cout;
using std::endl;
using std::vector;

namespace academia {



    class StudyYear  {
    public:
        StudyYear();

        StudyYear(int x);

        ~StudyYear() ;

        void SetYear(int y);

        StudyYear &operator++(); // & znaczy ze operujesz na tym samym obiekcie xd

        StudyYear &operator--();

        int study_year;

        bool operator==(StudyYear another_study_year) const;

        bool operator==(int year_nr) const;

        bool operator<(StudyYear another_study_year) const;

        bool operator>(StudyYear another_study_year) const;

        operator int() const;
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
        bool operator==(Student another_student) const;
    };

    class StudentRepository{
    public:
        StudentRepository();
        StudentRepository(std::initializer_list<Student> list);
        ~StudentRepository(){};

        vector <Student> repository ;
        int StudentCount();
        int studentCount;

        Student operator[](string id);

        bool operator==(StudentRepository another_repository) const;

    };

    bool operator==(int uu, StudyYear study_year);

    istream &operator>>(istream &input, StudyYear &y);

    std::ostream &operator<<(std::ostream &s, const Student &v);
}

#endif //JIMP_EXERCISES_STUDENT_H


//[1 plus] zdefiniować operator ++ i -- pre(in|de)krementacji dla StudyYear

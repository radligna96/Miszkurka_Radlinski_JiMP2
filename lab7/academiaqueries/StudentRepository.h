//
// Created by miszk on 4/13/2017.
//

#ifndef JIMP_EXERCISES_STUDENTREPOSITORY_H
#define JIMP_EXERCISES_STUDENTREPOSITORY_H

#include "Student.h"
#include <vector>
#include "string"
#include "../../lab6/Student/Student.h"
#include <initializer_list>

using std::string;

namespace academia{

    class StudentRepository {
    public:
        StudentRepository(){};
        ~StudentRepository(){};
        StudentRepository(std::initializer_list <Student()> oo);

        std::vector <Student> repository;
    };

}



#endif //JIMP_EXERCISES_STUDENTREPOSITORY_H

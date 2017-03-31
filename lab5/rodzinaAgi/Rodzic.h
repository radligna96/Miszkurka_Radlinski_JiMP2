//
// Created by miszk on 3/31/2017.
//

#ifndef JIMP_EXERCISES_RODZIC_H
#define JIMP_EXERCISES_RODZIC_H

#include "Dziecko.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Parent{
public:
    Parent(string a, string b, Child d);
    ~Parent(){};
    void enrollToAnotherSchool();
private:
    string p_name;
    string surname;
    Child agusia;
};

#endif //JIMP_EXERCISES_RODZIC_H

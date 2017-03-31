//
// Created by miszk on 3/31/2017.
//

#ifndef JIMP_EXERCISES_DZIECKO_H
#define JIMP_EXERCISES_DZIECKO_H
//#include "Rodzic.h"
#include <string>
using std::string;

class Child{
public:
    //Child(string a, string b, int c);
    //~Child(){};
    friend class Parent;  //bez tego nie moge zmienic szkoly
    void assign_child(Child new_child);

private:
    string school;
    string ch_name;
    int age;
};

#endif //JIMP_EXERCISES_DZIECKO_H

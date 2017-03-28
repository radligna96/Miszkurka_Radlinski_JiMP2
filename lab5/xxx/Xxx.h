//
// Created by radligna on 28.03.17.
//

#ifndef JIMP_EXERCISES_XXX_H
#define JIMP_EXERCISES_XXX_H

using namespace std;

#include <iostream>
#include <cstring>
#include <string>

class XXX {
    //w zeszłym odcinku:
    //domyślny konstruktor
    XXX();
    //konstruktory parametryczne
    XXX(int param);
    XXX(const std::string name);

    //Rule of five://
    //1. konstruktor kopiujący
    XXX(const XXX &xxx);
    //2. konstruktor przenoszący
    XXX(XXX &&xxx);
    //3. operator przypisania kopiujący
    XXX &operator=(const XXX &xxx);
    //4. operator przypisania przenoszący
    XXX &operator=(XXX &&xxx);

    XXX() : name_{new char[1024]} {

    }


private:
    char *name_;
    //...
    //5. destruktor:
    ~XXX() {
        delete [] name_;

}



#endif //JIMP_EXERCISES_XXX_H

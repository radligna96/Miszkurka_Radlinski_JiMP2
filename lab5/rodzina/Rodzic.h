//
// Created by Ignacy on 3/28/2017.
//

#ifndef JIMP_EXERCISES_RODZIC_H
#define JIMP_EXERCISES_RODZIC_H


#include "Dziecko.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Rodzic
{
private:
    Dziecko ignas;
public:
    Rodzic();
    //Rodzic(Dziecko dziecko);
    ~Rodzic();
    friend void nowa_szkola(string szkola);

};

#endif //JIMP_EXERCISES_RODZIC_H

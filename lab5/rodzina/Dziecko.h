//
// Created by Ignacy on 3/28/2017.
//

#ifndef JIMP_EXERCISES_DZIECKO_H
#define JIMP_EXERCISES_DZIECKO_H

#include "Dziecko.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Dziecko
{
public:
    Dziecko();
    Dziecko(string imie);
    ~Dziecko();

private:
    string szkola;
    string imie;
};

#endif //JIMP_EXERCISES_DZIECKO_H

//
// Created by miszagni on 25.04.17.
//

#ifndef JIMP_EXERCISES_PESEL_H
#define JIMP_EXERCISES_PESEL_H

#include "string"

#include<cstdlib>
#include<cstring>
#include<string>
#include<iostream>


class PESEL {
public:
    PESEL(std::string pesel_);
    ~PESEL() {};
    void validatePESEL(std::string pesel);
    std::string nr_pesel;

};

class PeselLength{
    //nic

};

class PeselNumbers{
    //nic
};


#endif //JIMP_EXERCISES_PESEL_H

//
// Created by miszagni on 09.05.17.
//

#ifndef JIMP_EXERCISES_PLECAK_H
#define JIMP_EXERCISES_PLECAK_H

#include "vector"
#include "iostream"
#include "functional"
#include "cstdlib"
#include "ctime"

using std::vector;

class Student {
public:
    Student();
    ~Student(){};
    int Wt;  //body weight
    double BW;  //body water constant
    double MR;
    int DP;  //drinking period

};

class Prowiant{
public:
    double zawartosc_alkoholu;
};

class Whisky : public Prowiant {
public:
    Whisky()
    {
        zawartosc_alkoholu = 200;
    };

};

class Drozdzowka : public Prowiant {
public:
    Drozdzowka(){
        zawartosc_alkoholu = 0;
    };
};

class Piwo : public Prowiant {
public:
    Piwo() {
        zawartosc_alkoholu = 25;
    }
};

class Plecak {
public:
    Plecak(Prowiant &prowiant) : prowiant_{&prowiant} {
        gram_etanolu =0;
        objetosc = 20;
    }

    operator Prowiant&() {
        return *prowiant_;
    }

    Prowiant *prowiant_;
    int gram_etanolu;
    int objetosc;

    bool EBAC(Student zdzisiu, Prowiant wybrany);
    void wypelnij_plecak(Student zdzisiu);
    vector <std::reference_wrapper<Prowiant>> zawartosc;
};


#endif //JIMP_EXERCISES_PLECAK_H

//
// Created by miszk on 4/18/2017.
//

#ifndef JIMP_EXERCISES_KSZTALT_H
#define JIMP_EXERCISES_KSZTALT_H

#include <iostream>
#include <random>
#include <iostream>
using std::vector;
using ::std::default_random_engine;
using ::std::uniform_int_distribution;


class Ksztalt {
public:
    virtual void rysuj()=0;
};

class Kolo : public Ksztalt {
public:
    virtual void rysuj();
};

class Trojkat : public Ksztalt {
public:
    virtual void rysuj();
};

class Kwadrat : public Ksztalt {
public:
    virtual void rysuj();
};




#endif //JIMP_EXERCISES_KSZTALT_H

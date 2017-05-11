//
// Created by miszk on 5/10/2017.
//

#ifndef JIMP_EXERCISES_PROWIANT_H
#define JIMP_EXERCISES_PROWIANT_H


class Prowiant {
public:
    int gram_alkoholu;
    int objetosc;  //ml
};

class Wodka : public Prowiant {
public:
    Wodka() {
        objetosc = 500;
        gram_alkoholu = 200;
    }
};

class Piwko : public Prowiant {
public:
    Piwko() {
        objetosc = 500;
        gram_alkoholu = 25;
    }
};

class Sok : public Prowiant {
public:
    Sok(){
        objetosc = 300;
        gram_alkoholu = 0;
    }
    ~Sok(){};
};

class Drozdzowka : public Prowiant{
    Drozdzowka(){
        objetosc = 0;
        gram_alkoholu = 0;
    }
    ~Drozdzowka(){};
};

#endif //JIMP_EXERCISES_PROWIANT_H

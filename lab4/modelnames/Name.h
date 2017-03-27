//
// Created by radligna on 21.03.17.
//

#ifndef JIMP_EXERCISES_NAME_H
#define JIMP_EXERCISES_NAME_H

#include <string>
#include <iostream>

using namespace std;

class Name{
public:
    Name(string nazwa);

    //Name(string imie, string nazwisko);


    ~Name();


    void pokaz();
    string FirstName();

private:
    string imie_;
    string drugie_;
    string trzecie_;
    string nazwisko_;

};

#endif //JIMP_EXERCISES_NAME_H

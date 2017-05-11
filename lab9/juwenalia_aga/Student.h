//
// Created by miszk on 5/10/2017.
//

#ifndef JIMP_EXERCISES_STUDENT_H
#define JIMP_EXERCISES_STUDENT_H

#include "Plecak.h"

//ebac = ((0.806 * ilosc_napojow * 1.2)/zdzisiu.BW/zdzisiu.Wt - zdzisiu.MR*zdzisiu.DP) *10;
class Student {
public:
    Student(){};
    Student(string plec , double weight, double drinking_period);
    ~Student(){};
    double BW; //0.58 for men lub 0.49 for women
    double Wt; //bodyy weigth
    double MR; //0.017;
    double DP; //driniking perdiod
    Plecak plecak_studenta;
};

#endif //JIMP_EXERCISES_STUDENT_H

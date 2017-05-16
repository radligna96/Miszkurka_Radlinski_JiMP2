//
// Created by miszk on 5/10/2017.
//

#include "Student.h"


Student::Student(string plec, double weight, double drinking_period) {
    if(plec == "mezczyzna")
        BW = 0.58;
    else if(plec == "kobieta")
        BW = 0.46;
    else
        throw std::invalid_argument("zla plec");

    Wt = weight;
    DP = drinking_period;
    MR = 0.015;
}
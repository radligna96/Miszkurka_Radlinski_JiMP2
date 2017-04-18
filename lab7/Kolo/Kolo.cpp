//
// Created by miszagni on 11.04.17.
//

#include "Kolo.h"

Kolo::Kolo(double a, double b, double c)
{
    x = a;
    y = b;
    r = c;
}

double Kolo::pole() {
    return (3.14*(this->r)*(this->r));
}
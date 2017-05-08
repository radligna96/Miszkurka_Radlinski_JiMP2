//
// Created by miszagni on 11.04.17.
//

#include "Kula.h"

double Kula::pole() {
    double pole;
    pole = 4*Kolo::pole();
    cout<<"popopole"<<Kolo::pole()<<endl;
    return pole;
}

double Kula::przekroj() {
    return Kolo::pole();
}

//
// Created by miszagni on 11.04.17.
//

#include "Kula.h"
#include "Kolo.h"
#include <iostream>

using namespace std;

int main(){
    //Kolo o(2,2,2);
    //cout<<o.pole()<<endl;
    Kula k(0,0,0,10);
    cout<<"Pole powierzchni kuli: "<<k.pole()<<endl;
    cout<<"Pole przekroju kuli: "<< k.przekroj()<<endl;
    return 0;
}
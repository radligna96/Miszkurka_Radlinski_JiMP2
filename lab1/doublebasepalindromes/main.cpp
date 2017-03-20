//
// Created by Ignacy on 3/14/2017.
//

#include "DoubleBasePalindromes.h"



int main() {

    int zakres;
    cout << "podaj zakres w jakim szukamy palindromow: ";
    cin >> zakres;
    int dwojka;
    cout<<endl<<"  licbza: ";
    cin>>dwojka;

    cout<<endl<<DoubleBasePalindromes(zakres)<<endl;

    return 0;

}
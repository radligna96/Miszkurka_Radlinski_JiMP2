//
// Created by miszk on 5/9/2017.
//

#include "Plecak.h"
#include "Student.h"
#include "WypelnijPlecak.h"
#include "PosortujProdukty.h"

int main ()
{
    int czas_imprezowania=12;
    int waga=80;
    string plec = "mezczyzna";

    cout<<"ile wazysz: ";
    std::cin>>waga;
    cout<<"kobieta czy mezczyzna (slownie): ";
    std::cin>>plec;
    cout<<"ile godzin zamierzasz impezowac:  ";
    std::cin>>czas_imprezowania;

    Student ignacjusz{plec, waga, czas_imprezowania};
    WypelnijPlecak o(&ignacjusz);


    int iter=1;
    std::cout << "WYPELNIONY PLECAK" <<std::endl;
     for (auto produkt : ignacjusz.plecak_studenta.prowianty_)
    {
        std::cout<<iter<< ".  "<<produkt.get().nazwa<<std::endl;
        iter++;
    }

    PosortujProdukty yo(&ignacjusz);

    iter = 1;
    std::cout << "POSORTOWANY PLECAK" <<std::endl;
    for (auto produkt : ignacjusz.plecak_studenta.prowianty_)
    {
        std::cout<<iter<< ".  "<<produkt.get().nazwa<<std::endl;
        iter++;
    }


    return 0;
}
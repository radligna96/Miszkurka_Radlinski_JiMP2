//
// Created by miszk on 5/9/2017.
//

#include "Plecak.h"
#include "Prowiant.h"
#include "Student.h"
#include "WypelnijPlecak.h"

int main ()
{
    Student ignacjusz{"mezczyzna", 80, 6};
    Wodka soplica{};
   /* for (auto i : ignacjusz.plecak_studenta.prowianty_)
    {
        std::cout<<"ooo   ";
    }*/
    WypelnijPlecak o(&ignacjusz);
    return 0;
}
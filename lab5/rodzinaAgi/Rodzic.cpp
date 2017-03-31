//
// Created by miszk on 3/31/2017.
//

#include "Rodzic.h"
//#include "Dziecko.h"

Parent::Parent(string a, string b, Child d)
{
    p_name = a;
    surname = b;
    agusia = d;
}

void Parent::enrollToAnotherSchool()
{
    agusia.school = "UJ";
    cout<<"szkola zmieniona!"<<endl;
}
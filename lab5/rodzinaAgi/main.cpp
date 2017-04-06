//
// Created by miszk on 3/31/2017.
//
#include "Rodzic.h"

int main()
{
    Child agusia;
    agusia.assign_child(agusia);
    Parent mama_agusi("Asia", "Miszkurka", agusia);
    mama_agusi.enrollToAnotherSchool();
    return 0;
}

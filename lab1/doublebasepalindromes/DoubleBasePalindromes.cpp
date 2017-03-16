//
// Created by Ignacy on 3/14/2017.
//

#include "DoubleBasePalindromes.h"

bool czy_palindrom(string slowo);

uint64_t DoubleBasePalindromes(int max_vaule_exculsive)

{
    string s_tmp;
    string tmp;
    uint64_t suma = 0;

    for (int i=0; i<max_vaule_exculsive; i++) {
        sprintf((char *) s_tmp.c_str(), "%d", i);
        string slowo = s_tmp.c_str();
        string dwojkowe;
        char tab[1000];
        if (czy_palindrom(slowo)) {
            dwojkowe = itoa(i, tab, 2);
            if (czy_palindrom(dwojkowe)) {
                suma += i;
            }
        }
    }
    return suma;
}


bool czy_palindrom(string slowo)
{
    int licznik=0;
    size_t dlugosc = slowo.size();
    for(int j=0; j<dlugosc/2; j++)
    {
        if (slowo[j]==slowo[dlugosc-1-j])
        {
            licznik++;
        }
        else
            break;
    }
    if (licznik == dlugosc/2)
        return true;
    else
        return false;
}
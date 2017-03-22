//
// Created by Ignacy on 3/14/2017.
//

#include "DoubleBasePalindromes.h"

bool czy_palindrom(string slowo);
string my_itoa(int liczba)
{
    string tab ="";

    while(liczba) //dopóki liczba będzie różna od zera
    {
        tab +=(char)((liczba%2)+48);
        liczba/=2;
    }
    return tab;
}
uint64_t DoubleBasePalindromes(int max_vaule_exculsive)

{
    string s_tmp;
    string tmp;
    uint64_t suma = 0;

    for (int i=0; i<max_vaule_exculsive; i++) {
        sprintf((char *) s_tmp.c_str(), "%d", i);
        string slowo = s_tmp.c_str();
        string dwojkowe;
        string tab;
        if (czy_palindrom(slowo)) {
            tab = my_itoa(i);
            dwojkowe = tab;
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
    return dlugosc / 2 == licznik; // LOOOOOL
    /*
     if (dlugosc / 2 == licznik)
        return true;
    else
        return false;
     */
}
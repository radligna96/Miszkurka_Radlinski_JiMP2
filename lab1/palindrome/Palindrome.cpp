//
// Created by Ignacy on 3/14/2017.
//

#include "Palindrome.h"



bool is_palindrome(string slowo)
{
    int i, licznik=0;
    size_t dlugosc = slowo.size();
    for (i=0; i<(dlugosc/2); i++)
    {
        if (slowo[i]==slowo[dlugosc-1-i])
            licznik++;
    }
    if (licznik == dlugosc/2)
    {
        cout<< "jest palindrom";
        return true;
    }
    else
        return false;
}
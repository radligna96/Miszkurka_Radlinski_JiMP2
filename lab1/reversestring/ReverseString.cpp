//
// Created by Ignacy on 3/14/2017.
//

#include "ReverseString.h"

string reverse (string str)
{
    string obrocone("");
    size_t size = str.size(); //uzyskanie z obiektu string ilości znaków
    // utworzenie nowego obiektu string na podstawie innego char*, char[], itp..
    for (int i = 0; i<size; i++)
        obrocone += str[size - 1 - i];
    return string(obrocone);
}
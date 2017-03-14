//
// Created by Ignacy on 3/14/2017.
//
#include "ReverseString.h"

int main() {

    string slowo ("");
    char literka;
    cout << "podaj jakies slowo: "<< endl;
    while((literka = getchar())!= 10)
    {
        slowo += literka;
    }
    cout<<reverse(slowo)<<" "<<endl;

    return 0;

}
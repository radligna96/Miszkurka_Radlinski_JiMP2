//
// Created by radligna on 21.03.17.
//
#include "Name.h"

int main()
{
    /*
    string imie, drugie = "", trzecie = "", nazwisko;
    cout<<"podaj pierwsze imie: ";
    cin>> imie;

    cout<<"podaj drugie: "<<endl;
    getchar();
    while ((c = (char)(getchar())!= 10))
    {
        drugie += c;
    }
    cout<<"podaj drugie: "<<endl;
    getchar();
    while ((c = (char)(getchar())!= 10))
    {
        drugie += c;
    }
    cout<<"podaj nazwisko: ";
    cin>>nazwisko;

    Name(imie, drugie, trzecie, nazwisko);
    */

    Name osoba1 ("adolf wolfgang amadeusz hitler");
    osoba1.pokaz();
    cout<<endl;
    cout<<osoba1.FirstName()<<endl;
    //string imie, nazwisko;
    //cin>>imie;
    //cin>>nazwisko;
    //Name osoba2 (imie, nazwisko);


    return 0;
}
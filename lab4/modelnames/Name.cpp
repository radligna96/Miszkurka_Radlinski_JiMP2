//
// Created by radligna on 21.03.17.
//

#include "Name.h"


Name::Name(string nazwa){
    string wyraz1, wyraz2, wyraz3, wyraz4;
    for (unsigned  long letter_index = 0; letter_index<nazwa.length(); letter_index++)
    {

        if(nazwa[letter_index] == ' ')
        {
            nazwa = nazwa.substr(letter_index +1, nazwa.length()-1);
            break;
        }
        wyraz1 += nazwa[letter_index];
    }
    //cout<<endl<<nazwa<<endl;
    for (unsigned long letter_index = 0; letter_index<nazwa.length(); letter_index++)
    {


        if(nazwa[letter_index] == ' ')
        {
            nazwa = nazwa.substr(letter_index +1 , nazwa.length());
            break;
        }
        wyraz2 += (nazwa[letter_index]);
    }
    //cout<<endl<<nazwa<<endl;
    for (unsigned long letter_index = 0; letter_index<nazwa.length(); letter_index++)
    {


        if(nazwa[letter_index] == ' ') {
            nazwa = nazwa.substr(letter_index +1, nazwa.length() - 1);
            break;
        }
        wyraz3 += (nazwa[letter_index]);
    }
    //cout<<endl<<nazwa<<endl;
    for (unsigned long letter_index = 0;letter_index<nazwa.length(); letter_index++)
    {
        if(nazwa[letter_index] == ' ')
        {
            nazwa = nazwa.substr(letter_index, nazwa.length()-1);
        }
        wyraz4 += (nazwa[letter_index]);
    }
    //cout<<endl<<nazwa<<endl;

    if((wyraz4 == "") &&(wyraz3 == "")){
        imie_ = wyraz1;
        drugie_ = wyraz3;
        trzecie_ = wyraz4;
        nazwisko_ = wyraz2;
    }
    else if((wyraz3 != "")&& (wyraz4 ==""))
    {
        imie_ = wyraz1;
        drugie_ = wyraz2;
        trzecie_ = wyraz4;
        nazwisko_ = wyraz3;
    }
    else {
        imie_ = wyraz1;
        nazwisko_ = wyraz4;
        drugie_ = wyraz2;
        trzecie_ = wyraz3;
    }
}


Name::~Name() {

cout<<"Destrukcja i Totalna dominacja nad swiatem!!!!";
}

void Name::pokaz()
{
    cout<<" imie: "<<imie_<<" drugie: "<< drugie_<<" trzecie: "<< trzecie_ <<" nbazwisko: "<<nazwisko_<<endl;
    //cout<<imie_<<drugie_<<trzecie_<<nazwisko_;
}
string Name::FirstName()
{
    return imie_;
}
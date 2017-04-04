//
// Created by Ignacy on 3/28/2017.
//

#include "Dziecko.h"

  Dziecko::Dziecko()
    {
        szkola = "gimnazjun";
        imie = "ignac";

    }
    Dziecko::Dziecko(string imie)
    {
        szkola = "gimnazjun";
        this->imie = imie;

    }

    Dziecko::~Dziecko()
    {
        cout<<"wakacje!"<<endl;
    }

    void Dziecko::nowa_szkola(string nowa)
    {
        szkola = nowa;
    }

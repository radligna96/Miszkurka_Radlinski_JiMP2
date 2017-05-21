//
// Created by miszagni on 09.05.17.
//

#include "Plecak.h"

Student::Student() {
    Wt = 70;
    BW = 0.58;
    MR = 0.017;
    DP = 8;
}

bool Plecak::EBAC(Student zdzisiu, Prowiant wybrany) {
    double ebac;
    ebac = ((0.806 * (gram_etanolu+wybrany.zawartosc_alkoholu) * 1.2)/zdzisiu.BW/zdzisiu.Wt - zdzisiu.MR*zdzisiu.DP) * 10;
    return (ebac <= 0.2);
}

void Plecak::wypelnij_plecak(Student zdzisiu) {
    srand(time(NULL));
    while (objetosc > 0)
    {
        int co_wziac = rand()%3;
        if (co_wziac == 0)
        {
            Piwo piwo{};
            if (EBAC(zdzisiu, piwo))
                zawartosc.emplace_back(piwo);
        }
        if (co_wziac == 2)
        {
            Whisky whisky{};
            if (EBAC(zdzisiu, whisky))
                zawartosc.emplace_back(whisky);
        }
        if (co_wziac == 3)
        {
            Drozdzowka drozdzowka{};
            zawartosc.emplace_back(drozdzowka);
        }
        objetosc--;
    }
}

//wypelnianie w main lub klasa pakowania

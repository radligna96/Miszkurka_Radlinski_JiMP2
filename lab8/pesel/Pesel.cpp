//
// Created by miszagni on 25.04.17.
//

#include "Pesel.h"
using std::string;
PESEL::PESEL(std::string pesel_) {
    validatePESEL(pesel_);
    nr_pesel = pesel_;
}

void PESEL::validatePESEL(string pesel) {
    if (pesel.length() != 11)
    {
        throw PeselLength();
    }
    else {
        for (int i=0; i<11; i++)
        {
            if (pesel[i] < 48 || pesel[i] > 57)
                throw PeselNumbers();
        }
        return;
    }
}

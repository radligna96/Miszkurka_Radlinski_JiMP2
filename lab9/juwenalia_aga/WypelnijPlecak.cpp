//
// Created by miszk on 5/11/2017.
//

#include "WypelnijPlecak.h"

WypelnijPlecak::WypelnijPlecak(Student *imprezowicz) {
    srand(time(NULL));
    int wylosowana;

    while (imprezowicz->plecak_studenta.pojemnosc > 0 ) {
            wylosowana = rand()%4;

        if (wylosowana == 0) {
            Wodka vodka{};
            if (ebac(imprezowicz->plecak_studenta, *imprezowicz, vodka.gram_alkoholu))
            {
                std::cout << "dodaje wodke" << std::endl;
                imprezowicz->plecak_studenta.prowianty_.emplace_back(vodka);
                imprezowicz->plecak_studenta.gram_alkoholu += vodka.gram_alkoholu;
                imprezowicz->plecak_studenta.pojemnosc --;
            }
        }
        else if (wylosowana == 1) {
            Piwko piwo{};
            if (ebac(imprezowicz->plecak_studenta, *imprezowicz, piwo.gram_alkoholu))
            {
                std::cout << "dodaje piwo" << std::endl;
                imprezowicz->plecak_studenta.prowianty_.emplace_back(piwo);
                imprezowicz->plecak_studenta.gram_alkoholu += piwo.gram_alkoholu;
                imprezowicz->plecak_studenta.pojemnosc --;
            }
        }
        else if (wylosowana == 2) {
            std::cout << "dodaje sok" << std::endl;
            imprezowicz->plecak_studenta.pojemnosc --;
        }
        else if (wylosowana == 3) {
            std::cout << "dodaje drozdzowke" << std::endl;
            imprezowicz->plecak_studenta.pojemnosc --;
        }

    }
}

bool WypelnijPlecak::ebac(Plecak pl, Student st, int dodatkowe_gramy_alkoholu) {
    double ebac=0;
    double SD;
    SD = (pl.gram_alkoholu + dodatkowe_gramy_alkoholu) / 10;
    ebac = ((0.806 * SD * 1.2)/(st.BW*st.Wt) - st.MR*st.DP);
    std::cout << "SD" << SD <<std::endl;
    std::cout << "gr alko  " << pl.gram_alkoholu << " + "<< dodatkowe_gramy_alkoholu <<std::endl;
    std::cout << "BW" << st.BW <<std::endl;
    std::cout << "Wt  " << st.Wt <<std::endl;

    std::cout << "MR  " << st.MR <<std::endl;
    std::cout << "DP " << st.DP<<std::endl;
    std::cout << "EBAC " <<  ebac<<std::endl;
    return ebac < 0.2;
}

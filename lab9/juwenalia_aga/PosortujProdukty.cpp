//
// Created by miszk on 5/12/2017.
//

#include "PosortujProdukty.h"


double ebaca(int godzina_imprezy, Student st, int gramy_alkoholu) {
    double ebac=0;
    double SD;
    SD = (gramy_alkoholu) / 10;
    ebac = ((0.806 * SD * 1.2)/(st.BW*st.Wt) - st.MR*godzina_imprezy);
    //std::cout << "SD" << SD <<std::endl;
    return ebac;
}

PosortujProdukty::PosortujProdukty(Student *st) {
    for (auto &produkt : st->plecak_studenta.prowianty_) {
        if (produkt.get().nazwa == "piwko" || produkt.get().nazwa == "winko" || produkt.get().nazwa == "wodka"){
            alkoholowe.emplace_back(produkt);
        }
        if (produkt.get().nazwa == "sok" || produkt.get().nazwa == "drozdzowka") {
            bezalkoholowe.emplace_back(produkt);
        }
    }

    double ebac=0;
    int liczba_produktow = int(st->plecak_studenta.prowianty_.size());
    double liczba_godzin = st->DP;
    int godzina_imprezy=1;
    int gram_alkoholu=0;

    for (int i=0; i<liczba_produktow; i++) {
        ebac = ebaca(godzina_imprezy, *st, gram_alkoholu);
        if (ebac <= 0) {
            if(alkoholowe.size() > 0)
            {
                std::cout<<"alk"<<std::endl;
                posortowane.emplace(posortowane.end(),alkoholowe[alkoholowe.size()-1]);
                gram_alkoholu += alkoholowe[alkoholowe.size()-1].get().gram_alkoholu;
                alkoholowe.pop_back();
            }
        }
        else{

            std::cout<<"balk"<<std::endl;
            if(bezalkoholowe.size() > 0)
            {
                posortowane.emplace(posortowane.end(),bezalkoholowe[bezalkoholowe.size()-1]);
                bezalkoholowe.pop_back();
            }
            if(godzina_imprezy < liczba_godzin)
                godzina_imprezy++;
        }
    }
    posortowane.swap(st->plecak_studenta.prowianty_);
}


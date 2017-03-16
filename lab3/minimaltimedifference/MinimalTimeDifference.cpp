//
// Created by Ignacy on 3/14/2017.
//

#include "MinimalTimeDifference.h"

namespace minimaltimedifference {
    unsigned int ToMinutes(string time_HH_MM) {
        unsigned int godzina, i = 0;
        string godz, min;

        while (time_HH_MM[i] != ':') {
            godz += time_HH_MM[i];
            i++;
        }
        i++;
        while (time_HH_MM[i]) {
            min += time_HH_MM[i];
            i++;
        }

        godzina = atoi(godz.c_str()); //bardzo wazne!!!!!
        godzina *= 60;
        godzina += atoi(min.c_str());
        return godzina;
    }
    unsigned int MinimalTimeDifference(vector<string> times) {
        unsigned int roznica, min_roznica = 24 * 60;
        vector<unsigned int> ilosc_minut;
        for (string godzina : times) {
            ilosc_minut.emplace_back(ToMinutes(godzina));
        }
        sort(ilosc_minut.begin(), ilosc_minut.end());
        ilosc_minut.emplace_back(ilosc_minut[0] + (24 * 60));

        for (int i = 0; i < ilosc_minut.size() - 1; i++) {
            roznica = ilosc_minut[i + 1] - ilosc_minut[i];
            if (roznica < min_roznica) {
                min_roznica = roznica;
            }
        }
        return min_roznica;
    }
}
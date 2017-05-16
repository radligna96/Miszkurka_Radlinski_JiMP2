//
// Created by miszk on 5/9/2017.
//

#ifndef JIMP_EXERCISES_PLECAK_H
#define JIMP_EXERCISES_PLECAK_H

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <functional>
#include <string>
#include <stdexcept>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::reference_wrapper;


class Prowiant {
public:

    int zawartosc_alhoholu; // w procentach
    int objetosc; // w cm3
};

class Wodka : public Prowiant {
public:
    Wodka() {
        //cout<<"wooodka"<<endl;
        this->zawartosc_alhoholu  = 40;
        this->objetosc = 700;
    }
};

class Piwko : public Prowiant {
public:
    Piwko() {
        //cout<<"piwkoooo"<<endl;
        this->zawartosc_alhoholu = 5;
        this->objetosc = 500;
    }
};

class Winko : public Prowiant {
public:
    Winko() {
        //cout<<"wiiiinko"<<endl;
        this->zawartosc_alhoholu = 12;
        this->objetosc = 1000;

    }
};


class Plecak {
public:

    int miejsce_w_plecaku;

    Plecak(Prowiant &prowiancik) : prowiancik_(&prowiancik) {}
    operator Prowiant&() {
        return *prowiancik_;
    }
private:
    Prowiant *prowiancik_;

public:
    vector<reference_wrapper<Prowiant>> prowianty_;
    Plecak(){}
    void DobieranieNapojow() {

        miejsce_w_plecaku = 10000;
        Wodka PanTadeusz {};
        Wodka Zytnia {};
        Wodka Zubrowka {};
        Wodka Kruuuuupnik{};
        Piwko Zubr{};
        Winko Kadarka{};
        Winko Fresco{};

        vector<reference_wrapper<Prowiant>> prowianty;

        prowianty.emplace_back(PanTadeusz);
        prowianty.emplace_back(Zytnia);
        prowianty.emplace_back(Zubr);
        prowianty.emplace_back(Zubrowka);
        prowianty.emplace_back(Kadarka);
        prowianty.emplace_back(Kruuuuupnik);
        prowianty.emplace_back(Fresco);

        while(miejsce_w_plecaku>0)
        {
            int iter = rand()%7;
            prowianty_.emplace_back(prowianty[iter]);
            Prowiant o = prowianty[iter];
            miejsce_w_plecaku -= o.objetosc;
            if(o.zawartosc_alhoholu == 40)
                cout<<"dodaje do plecaka wooode!"<<endl;
            if(o.zawartosc_alhoholu == 5)
                cout<<"dodaje do plecaka piwooo!"<<endl;
            if(o.zawartosc_alhoholu == 12)
                cout<<"dodaje do plecaka wiiino!"<<endl;

        }
    }


};

//ebac = ((0.806 * ilosc_napojow * 1.2)/zdzisiu.BW/zdzisiu.Wt - zdzisiu.MR*zdzisiu.DP) *10;
class Student {
public:
    Plecak torba;
    Student(){};
    Student(string plec , double weight, double drinking_period);
    ~Student(){};
    double BW; //0.58 for men lub 0.49 for women
    double Wt; //bodyy weigth
    double MR; //0.017;
    double DP; //driniking perdiod

};


#endif //JIMP_EXERCISES_PLECAK_H

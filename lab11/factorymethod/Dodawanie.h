//
// Created by miszagni on 23.05.17.
//

#ifndef JIMP_EXERCISES_DODAWANIE_H
#define JIMP_EXERCISES_DODAWANIE_H

#include <iostream>
#include "vector"
#include "algorithm"
#include "memory"
using namespace std;

template<class T1>
T1 Sum( const T1 &left, const T1 &right) {
    return left + right;
}

template<class T2>
T2 Mean(vector<T2> v1){
    T2 sum = std::accumulate(v1.begin(), v1.end(), (T2)(0));
    T2 size =(v1.size());
    return (T2)(sum/size);
}

template<class T3>
T3 Value(shared_ptr<T3> wsk){
        return *wsk;
}


class Klasa_bazowa_rzeczy_z_projektu_academia_od_mgr_Wypycha {

};

class Query : public Klasa_bazowa_rzeczy_z_projektu_academia_od_mgr_Wypycha {

};

template<class Klasa_bazowa_rzeczy_z_projektu_academia_od_mgr_Wypycha>
class Repository{
    virtual Klasa_bazowa_rzeczy_z_projektu_academia_od_mgr_Wypycha Size()=0;
    virtual Klasa_bazowa_rzeczy_z_projektu_academia_od_mgr_Wypycha  NextId()=0;
    virtual Klasa_bazowa_rzeczy_z_projektu_academia_od_mgr_Wypycha FindBy(Query)=0;
    //operator[]
};



#endif //JIMP_EXERCISES_DODAWANIE_H

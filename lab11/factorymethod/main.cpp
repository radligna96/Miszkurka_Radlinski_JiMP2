//
// Created by miszagni on 23.05.17.
//
#include "Dodawanie.h"
int main()
{

    int poi = 4;
    int o = 5;

    int ooo = Sum(poi,o);
    cout<<ooo<<endl;

    double ot =4.33, uu =7.5;
    cout<<Sum(ot,uu)<<endl;


    vector <double> v2= {1,2,3.5};
    cout<<Mean(v2)<<endl;

    shared_ptr <int> ojoj = make_shared<int>(poi);
    cout<<Value(ojoj);


    return 0;
}
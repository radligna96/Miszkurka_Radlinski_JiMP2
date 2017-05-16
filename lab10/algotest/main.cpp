//
// Created by miszagni on 16.05.17.
//

#include "Algo.h"

int main()
{
    vector<int> v1{1,2,3,7,5};
    vector<int> v2;
    int liczba = 4;
    //int tab[]  = {1,2,3,4,5};

    Algo::CopyInto(v1,liczba, &v2);
    //std::copy_n(tab, liczba, v2.begin());

    for(auto element : v1)
    {
        cout<<element<<" ";
    }
    cout<<endl;
    for(auto element : v2)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    if(Algo::Contains(v2, 6))
        cout<<"jest"<<endl;
    else
        cout<<"nie ma"<<endl;

    liczba = 2;
    Algo::InitializeWith(liczba, &v2);
    for(auto element : v2)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    int suma = Algo::Sum(v2);
    cout<<suma <<" to suma"<< endl;

    int produkt = Algo::Product(v2);
    cout<<produkt <<" to produkt"<< endl;

    vector<int> v3 {4,6,78,2,4,6};
    vector<int> *p = &v1;

    Algo::SortInPlace(p);
    for(auto element : v1)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    v3 = Algo::Sort(v3);
    for(auto element : v3)
    {
        cout<<element<<" ";
    }
    cout<<endl;


    return 0;
}
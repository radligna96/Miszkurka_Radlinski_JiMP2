//
// Created by Ignacy on 3/14/2017.
//

#include "Array2D.h"
int main()
{
    int wiersze, kolumny;
    cout<<"podaj liczbe wierszy: ";
    cin>>wiersze;
    cout<<"podaj liczbe kolumn: ";
    cin>>kolumny;

    int ** tablica= Array2D(wiersze, kolumny);
    DeleteArray2D(tablica, wiersze, kolumny);

    return 0;

}
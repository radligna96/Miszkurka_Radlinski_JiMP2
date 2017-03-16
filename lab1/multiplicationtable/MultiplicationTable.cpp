//
// Created by Ignacy on 3/14/2017.
//

#include "MultiplicationTable.h"

void funkcja2(int tab[][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}

void MultiplicationTable(int tab[][10])
{
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            tab[i][j]=(i+1)*(j+1);
        }
    }
    funkcja2(tab);
}
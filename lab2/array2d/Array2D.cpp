//
// Created by Ignacy on 3/14/2017.
//



#include "Array2D.h"



void DeleteArray2D(int **array, int n_rows, int n_columns)

{

    for (int i=0; i<n_rows; i++)

    {

        delete [] array [i];

    }



    delete [] array;

}



void pokaz(int **tablica, int wiersze, int kolumny)

{

    for (int i=0; i<wiersze; i++)

    {

        for(int j=0;j<kolumny;j++)

        {



            cout<<tablica[i][j]<<" ";



        }

        cout<<endl;

    }



}



int **Array2D(int wiersze, int kolumny)

{

    if ((wiersze<=0)||(kolumny<=0))

    {

        return nullptr;

    }



    int k=1;

    int **tablica = new int *[wiersze];

    for (int i=0; i< wiersze; i++)

        tablica[i]=new int [kolumny];



    for (int i=0; i<wiersze; i++)

    {

        for (int j=0;j<kolumny; j++)

        {

            tablica[i][j]=k;

            k++;

        }

    }



    pokaz(tablica, wiersze, kolumny);











    return tablica;

}




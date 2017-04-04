//
// Created by miszk on 3/31/2017.
//

#include "Marsjanin.h"

int Martian::martianNumber = 0;

int Martian::attack()
{
    cout<<"yoo atakujemy se!"<<endl;
    int is_killed =  std::rand() % 2;
    cout<<is_killed<<endl;
    if (is_killed == 1 && Martian::martianNumber > 0)
    {
        Martian::martianNumber--;
        cout<<"uu zginal Marsjanin...";
        return 1;
    }
    return 0;
}
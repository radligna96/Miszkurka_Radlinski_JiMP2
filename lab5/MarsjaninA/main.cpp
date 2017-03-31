//
// Created by miszk on 3/31/2017.
//

#include "Marsjanin.h"
#include <list>
#include <cstddef>



int main()
{
    srand((unsigned int) time(NULL ));
    std::list <Martian> martians;


    int i=0;
    while (i<10)
    {
        if (Martian::martianNumber < 5)
        {
            cout<<"chowamy sie!"<<endl;
        }
        else{
            if (Martian::attack()==1 && Martian::martianNumber > 0)
            {
                martians.pop_back();
                Martian::martianNumber--;
                cout<<"uu zginal Marsjanin..."<<endl;
            }
        }
        int is_killed =  std::rand() % 2;
        if (is_killed == 1 && Martian::martianNumber > 0)
        {
            martians.pop_back();
            Martian::martianNumber--;
            cout<<"uu zginal Marsjanin..."<<endl;
        }
        else
        {
            cout<<"nowy Marsjanin"<<endl;
            Martian *m = new Martian;
            martians.push_front(*m);
            Martian::martianNumber ++;
        }
        cout<<"mamy "<<Martian::martianNumber<<" marsjan"<<endl;
        i++;
    }

    return 0;
}
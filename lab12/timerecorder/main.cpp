//
// Created by radligna on 31.05.17.
//

#include "TimeRecorder.h"

int main()
{
    clock_t ofdset1 = clock();

    cout<<ofdset1<<"oo"<<endl;
    int i =0, j=1;
    while(i< 10)
    {
        while(j< 10)
            j++;
        i++;
    }
    clock_t ofdset = clock();
    cout<<ofdset<<"oo"<<endl<<ofdset - ofdset1<<endl;

[](){}();


    return 0;
}

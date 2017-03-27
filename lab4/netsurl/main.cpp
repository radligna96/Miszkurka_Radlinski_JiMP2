//
// Created by miszk on 3/27/2017.
//

#include "SimpleUrl.h"


int main()
{

    string nic = "mailto:jasne@przykro.com //no";

    nets::SimpleUrl obj1 {nic};
    cout<<endl<<obj1.Scheme()<<endl;
    cout<<endl<<obj1.Login()<<endl;
    cout<<endl<<obj1.Host()<<endl;


    return 0;
}
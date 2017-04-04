//
// Created by Ignacy on 3/28/2017.
//


#include "Rodzic.h"

Rodzic::Rodzic()
{
    Dziecko ig {"ii"};
    ignas = ig;
}

//Rodzic::Rodzic(Dziecko dziecko)
//{
//    ignas = dziecko;
//}

Rodzic::~Rodzic() {
    cout << "studia!" << endl;
}
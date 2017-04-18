//
// Created by miszk on 4/18/2017.
//

#include "Ksztalt.h"
#include <list>

int main()
{
    std::list <Ksztalt*> lista;
    int rand_;
    auto generator = default_random_engine {};
    auto distribution = uniform_int_distribution<int> {1,3};

    for(int i = 0 ; i<10;  i++)
    {
        rand_ = distribution(generator);
        Ksztalt * wsk;
        if (rand_ == 1)
            wsk = new Trojkat;
        else if(rand_ == 2)
            wsk = new Kwadrat;
        else
            wsk = new Kolo;

        lista.emplace_back(wsk);
    }
    lista.front()->rysuj();

    for (auto it : lista)
    {
        it->rysuj();
    }

    return 0;
}
//
// Created by radligna on 18.04.17.
//
#include "Ksztalt.h"
#include "Kwadrat.h"
#include "Kolko.h"
#include <list>
#include <random>
using ::std::default_random_engine;
using ::std::uniform_int_distribution;

int main() {
    Kwadrat o;
    (o).rysuj();
    Kolko a;
    (a).rysuj();

    std::list<Ksztalt *> lista;

    auto generator = default_random_engine();
    auto distribution = uniform_int_distribution<int> {1, 3};
    for (int i = 0; i < 10; i++) {
        int tmp = distribution(generator);
        Ksztalt *pointer;
        if (tmp == 1)
            pointer = new Kwadrat;
        else if (tmp == 2)
            pointer = new Kolko;
        else if (tmp == 3)
            pointer = new Trojkat;

        lista.emplace_back(pointer);
    }

    for (auto iter : lista) {
        iter->rysuj();
    }

    return 0;

}
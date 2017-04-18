//
// Created by miszk on 4/18/2017.
//

#include "Ksztalt.h"

void Trojkat::rysuj() {
    for (int i = 1; i < 10; i++) {
        for (int j = 10; j > 0; j--) {
            if (j == i) {
                std::cout << "/";
            } else if (j < i) {
                if(i==9)
                {
                    std::cout << "_";
                } else{
                    std::cout<<" ";
                }

            } else if (j > i + 1) {
                std::cout << " ";
            }

        }

        for (int j = 0; j < i; j++) {
            if (j == i - 1) {
                std::cout << "\\";
            } else {
                if(i==9)
                {
                    std::cout << "_";
                } else{
                    std::cout<<" ";
                }
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void Kwadrat::rysuj() {
    std::cout<<"[]"<<std::endl;
}

void Kolo::rysuj() {
    std::cout<<"O"<<std::endl;
}
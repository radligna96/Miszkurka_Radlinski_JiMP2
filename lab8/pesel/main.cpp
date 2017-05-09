//
// Created by miszagni on 25.04.17.
//
#include "Pesel.h"
int main()
{
    std::string moj = "1234567890a";
    try{
        PESEL n(moj);
    }catch(PeselLength a){
        std::cout << "inna dlugosc" << std::endl;
    }catch(PeselNumbers b) {
        std::cout << "pesel nie sklada sie z  cyfr" << std::endl;
    }catch(...){
        std::cout << "Blad podczas rysowania kuli" << std::endl;
    }

    return 0;
}
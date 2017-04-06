//
// Created by miszagni on 04.04.17.
//

#include "Student.h"

int main()
{

    StudyYear aga;
    std::cin >> aga;
    std::cout<<aga.year;
    ++aga;
    std::cout<<aga.year;
    return 0;
}
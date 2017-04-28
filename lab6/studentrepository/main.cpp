//
// Created by miszagni on 04.04.17.
//

#include "StudentRepository.h"
using academia::StudyYear;
int main()
{

    StudyYear aga;
    std::cin >> aga;
    std::cout<<aga.study_year;
    ++aga;
    std::cout<<aga.study_year;
    return 0;
}
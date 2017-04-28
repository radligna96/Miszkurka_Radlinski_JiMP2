//
// Created by miszagni on 04.04.17.
//

#include "StudentRepository.h"
using academia::StudyYear;
using academia::Student;
int main()
{

    StudyYear aga;
    std::cin >> aga;
    std::cout<<aga.study_year;
    ++aga;
    std::cout<<aga.study_year;

    Student s2 {"2035", "Orson", "Sabach", "górnictwo", 2};

    s2.ChangeLastName("Nowe nazwisko");
    cout<<s2.LastName();
    return 0;
}
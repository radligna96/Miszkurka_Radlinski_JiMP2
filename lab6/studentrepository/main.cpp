//
// Created by miszagni on 04.04.17.
//

#include "StudentRepository.h"
using academia::StudyYear;
using academia::Student;
using academia::StudentRepository;
int main()
{

//    StudyYear aga;
//    std::cin >> aga;
//    std::cout<<aga.study_year;
//    ++aga;
//    std::cout<<aga.study_year;

    Student s2 {"2035", "Orson", "Sabach", "górnictwo", 2};

    cout<<s2.LastName()<<endl;
    s2.ChangeLastName("Nowe nazwisko");
    cout<<s2.LastName();

    StudentRepository repository
            {{"2030", "Michał", "Dzieeeedziiic", "architektura", 5}, {"2031", "Katarzyna", "Bach", "informatyka", 3},
             {"2035", "Orson", "Sabach", "górnictwo", 2}};
    cout<<endl<<repository["2030"].lastName<<endl;
    repository["2030"].ChangeLastName("dziemich");
    cout<<endl<<repository["2030"].lastName<<endl;
    return 0;
}
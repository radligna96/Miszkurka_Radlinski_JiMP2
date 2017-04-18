//
// Created by miszagni on 04.04.17.
//

#include "Student.h"
#include "StudentRepository.h"
using namespace academia;

int main()
{
    StudyYear aga{2};
    std::cout<<aga.year<<std::endl;
    ++aga;
    std::cout<<aga.year<<std::endl;
    Student ignas{"22", "iggy", "r", "inf", 1};
    std::cout<<ignas.id<<"oo";
    StudentRepository repo{};
    repo.repository.emplace_back(ignas);
    //StudentRepository repo2{{"2030", "Micha", "Karak", "architektura", 5}, {"2031", "Katarzyna", "Bach", "informatyka", 3}};
    return 0;
}
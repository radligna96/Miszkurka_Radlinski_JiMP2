//
// Created by miszagni on 04.04.17.
//

#include "Student.h"
using ::std::istream;

StudyYear & StudyYear::operator++()
{
    this->year += 1;
    return * this;
}

StudyYear & StudyYear::operator--()
{

    this->year -= 1;
    return * this;
}

std::ostream & operator <<( std::ostream & s, const Student & v )
{
    return s << "Student " << v.last_name << std::endl << "id: "<< v.id << std::endl<< "program: " << v.program;
}

void StudyYear::SetYear(int y)
{
    this->year = y;
}

int ReadNumber(istream &is) {
    int d;
    is >> d;
    return d;
}

istream& operator>>(istream & input, StudyYear& y){
    y.SetYear(ReadNumber(input));
    return input;
}



//
// Created by miszk on 4/13/2017.
//

#include "StudyYear.h"

using ::std::istream;

namespace academia{

    int ReadNumber(istream &is) {
        int d;
        is >> d;
        return d;
    }

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

    istream& operator>>(istream & input, StudyYear& y){
        y.SetYear(ReadNumber(input));
        return input;
    }

    void StudyYear::SetYear(int y)
    {
        this->year = y;
    }


}


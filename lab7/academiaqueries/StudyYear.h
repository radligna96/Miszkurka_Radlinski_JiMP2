//
// Created by miszk on 4/13/2017.
//

#ifndef JIMP_EXERCISES_STUDYYEAR_H
#define JIMP_EXERCISES_STUDYYEAR_H

#include <iostream>
#include <string>
#include <iomanip>

using std::string;
using std::istream;

namespace academia{

    class StudyYear{
    public:
        StudyYear()
        {
            this->year = 1;
        }
        StudyYear(int xx): year(xx){};
        ~StudyYear(){};
        void SetYear(int y);

        StudyYear & operator++();
        StudyYear & operator--();
        int year;
    };

    istream& operator>>(istream & input, StudyYear& y);
}



#endif //JIMP_EXERCISES_STUDYYEAR_H

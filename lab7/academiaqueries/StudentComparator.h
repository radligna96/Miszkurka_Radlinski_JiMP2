*///
// Created by miszk on 4/14/2017.
//

#ifndef JIMP_EXERCISES_STUDENTCOMPARATOR_H
#define JIMP_EXERCISES_STUDENTCOMPARATOR_H

#include "Student.h"

namespace academia{

    class StudentComparator {
    public:
        virtual bool IsLess(const Student &left, const Student &right)=0;
        bool operator()( Student &left, Student &right)
        {
            return IsLess(left, right);
        };
    };

    class ByFirstNameAscending : public StudentComparator {
    public:
        virtual bool IsLess(const Student &left, const Student &right);
    };


}



#endif //JIMP_EXERCISES_STUDENTCOMPARATOR_H

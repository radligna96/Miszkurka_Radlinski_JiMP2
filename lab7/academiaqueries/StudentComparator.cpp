//
// Created by miszk on 4/14/2017.
//

#include "StudentComparator.h"

namespace academia{
    /*
    bool StudentComparator::operator()( Student &left, Student &right)
    {
        return StudentComparator::IsLess(left, right);
    }
     */

    bool ByFirstNameAscending::IsLess(const Student &left, const Student &right) {
        return false;
    }
}

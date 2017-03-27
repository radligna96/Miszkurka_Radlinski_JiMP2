//
// Created by miszk on 3/25/2017.
//

#include "Square.h"

namespace geometry{
    Square::Square(Point A, Point B, Point C, Point D) {
        A_=A;
        B_=B;
        C_=C;
        D_=D;
    }

    double Square::Circumference() {
        if (A_.Point::GetX() ==B_.Point::GetX() || A_.Point::GetY()==B_.Point::GetY())
        {
            // istnieje bok AB
            return B_.Point::Distance(A_);
        }
        else if(A_.Point::GetX() == C_.Point::GetX() || A_.Point::GetY()==C_.Point::GetY())
        {
            return C_.Point::Distance(A_);
        }
        else
        {
            return 0.0;
        }
    }

    double  Square::Area() {
        double side = Square::Circumference();
        if (side == 0) return 0.0;
        else {
            return side*side;
        }
    }
}


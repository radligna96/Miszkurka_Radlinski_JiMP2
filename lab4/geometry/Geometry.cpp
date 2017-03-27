//
// Created by miszk on 3/25/2017.
//

#include "Geometry.h"
#include <ostream>
#include <cmath>

using namespace std;
using ::std::ostream;
using ::std::endl;
using ::std::pow;
using ::std::sqrt;

namespace geometry {

    Point::Point():x_(0),y_(0){
        cout << "Konstruktor bezparametrowy" << endl;
    }

    Point::Point(double x, double y){
        cout << "Konstruktor parametrowy" << endl;
        x_ = x;
        y_ = y;
    }

    Point::~Point(){};

    double Point::GetX() const
    {
        return x_;
    }
    double Point::GetY() const
    {
        return y_;
    }

    double Point::Distance(const Point &other) const{
        return sqrt(pow(GetX()-other.GetX(),2)+pow(GetY()-other.GetY(),2));
    }

    void Point::ToString(ostream *out) const{
        (*out) << "(" << GetX() << ";" << GetY() << ")";
    }

    Square::Square(Point A, Point B, Point C, Point D) {
        A_=A;
        B_=B;
        C_=C;
        D_=D;
    }

    double Square::Circumference() {
        //to jest zle
        if (A_.Point::GetX() ==B_.Point::GetX() || A_.Point::GetY()==B_.Point::GetY())
        {
            return B_.Point::Distance(A_)*4;
        }
        else if(A_.Point::GetX() == C_.Point::GetX() || A_.Point::GetY()==C_.Point::GetY())
        {
            return C_.Point::Distance(A_)*4;
        }
        else
        {
            return 0.0;
        }
    }

    double  Square::Area() {
        double side = Square::Circumference()/4;
        if (side == 0) return 0.0;
        else {
            return side*side;
        }
    }
}


//
// Created by miszk on 3/25/2017.
//

#include <ostream>
#include <cmath>
#include "Point.h"
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
}


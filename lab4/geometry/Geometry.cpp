//
// Created by miszk on 3/25/2017.
//

#include "Geometry.h"
#include <ostream>
#include <cmath>

using namespace std;
using ::std::istream;
using ::std::ostream;
using ::std::endl;
using ::std::pow;
using ::std::sqrt;

namespace geometry {

    Point::Point():x_(0),y_(0){
        cout << "Konstruktor bezparametrowy " << endl;
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


//Helper functions:
    void CheckNextChar(char c, istream &is) {
        int next_char = is.peek();
        if (next_char != c) {
            throw runtime_error("invalid character");
        }
        is.ignore();
    }

    double ReadNumber(istream &is) {
        double d;
        is >> d;
        return d;
    }


// Właściwa definicja, obydwa argumenty funkcji nie
//są zadeklarowane jako const, bo obydwa są modyfikowane
//wewnątrz funkcji (STL nie używa naszej konwencji z przekazywaniem
//przez wskaźnik)
    istream& operator>>(istream & input, Point& p){
        CheckNextChar('(', input);
        p.SetX(ReadNumber(input));
        CheckNextChar(',', input);
        p.SetY(ReadNumber(input));
        CheckNextChar(')', input);
        return input;      // Umożliwia cin >> a >> b >> c;
    }

    istream& operator<<(istream & input, Point& p){
        CheckNextChar('(', input);
        p.SetX(ReadNumber(input));
        CheckNextChar(',', input);
        p.SetY(ReadNumber(input));
        CheckNextChar(')', input);
        return input;      // Umożliwia cin >> a >> b >> c;
    }
}


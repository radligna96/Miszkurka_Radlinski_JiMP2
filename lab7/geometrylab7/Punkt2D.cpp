//
// Created by miszk on 3/25/2017.
//

#include "Punkt2D.h"

namespace geometry {

    Point2D::Point2D():x_(0),y_(0){
        cout << "Konstruktor bezparametrowy 2D" << endl;
    }

    Point2D::Point2D(double x, double y){
        cout << "Konstruktor parametrowy 2D" << endl;
        x_ = x;
        y_ = y;
    }

    Point2D::~Point2D(){
        cout<<"destruktor 2D"<<endl;
    };

    double Point2D::GetX() const
    {
        return x_;
    }
    double Point2D::GetY() const
    {
        return y_;
    }


    double Point2D::Distance(const Point2D &other) const{
        return sqrt(pow(GetX()-other.GetX(),2)+pow(GetY()-other.GetY(),2));
    }

    void Point2D::ToString(ostream *out) const{
        (*out) << "(" << GetX() << ";" << GetY() << ")";
    }

    void Point2D::SetX(double x_) {
        Point2D::x_ = x_;
    }

    void Point2D::SetY(double y_) {
        Point2D::y_ = y_;
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
    istream& operator>>(istream & input, Point2D& p){
        CheckNextChar('(', input);
        p.SetX(ReadNumber(input));
        CheckNextChar(',', input);
        p.SetY(ReadNumber(input));
        CheckNextChar(')', input);
        return input;      // Umożliwia cin >> a >> b >> c;
    }

    ostream& operator<<(ostream & input, Point2D& p){
        input << "("<<p.GetX();
        input << ";";
        input << p.GetY()<<")";
        return input;
    }
}


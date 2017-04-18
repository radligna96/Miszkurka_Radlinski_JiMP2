//
// Created by miszk on 4/16/2017.
//
//Definicja znajduje się w pliku Point.cpp
#include "Point.h"


/* Aby wskazać, ze definicja funkcji dotyczy metody danej klasy
  stosujemy tzw. operator zasięgu - "::"
*/

//Specjalna inicjalizacja zmiennych. Zmienne są inicjowane
//nim zostanie wywołane ciało konstruktora
Point::Point():x_(0),y_(0){
    cout << "Konstruktor bezparametrowy" << endl;
}

Point::Point(double x, double y){
    cout << "Konstruktor parametrowy" << endl;
    x_ = x;
    y_ = y;
}

Point::~Point(){
    cout << "Destruktor! Nic nie robie, bo nie musze zwalniać pamięci!";
    cout << endl;
}

double Point::Distance(const Point &other) const{
    return sqrt(pow(GetX()-other.GetX(),2)+pow(GetY()-other.GetY(),2));
}

void Point::ToString(ostream *out) const{
    (*out) << "(" << GetX() << ";" << GetY() << ")";
}


double Point::GetX() const
{
    return x_;
}
double Point::GetY() const
{
    return y_;
}

double Point3d::Distance(Point3d oo) {
    cout<<"licze sobie dystans 3d"<<endl;
    return 0;
}

Point3d::Point3d(double x, double y, double z_) {
    Point::x_ = x;
    Point::y_ = y;
    z = z_;
    cout<<"konstruk. param 3d"<<endl;
}

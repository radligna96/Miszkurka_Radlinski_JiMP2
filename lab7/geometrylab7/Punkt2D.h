//
// Created by miszk on 3/25/2017.
//

#ifndef JIMP_EXERCISES_GEOMETRY_H
#define JIMP_EXERCISES_GEOMETRY_H

#include <string>
#include <iostream>
#include <cmath>

using std::istream;
using std::ostream;
using std::endl;
using std::pow;
using std::sqrt;
using std::cout;
using std::runtime_error;

namespace geometry{

    class Point2D {

    private:
        //w przeciwienstwie do pythona C++ wymaga jawnej deklaracji składowych pól klasy:
        double x_, y_;
    public:
        //Konstruktor bezparametrowy
        Point2D();
        //Konstruktor parametrowy
        Point2D(double x, double y);
        //Destruktor wykonywany przed zwolnieniem pamięci
        virtual ~Point2D();

        //Metody nie modyfikujące stanu obiektu (const na końcu metody)
        //nie mogą zmodyfikować tego obiektu.
        void ToString(ostream *out) const;
        double Distance(const Point2D &other) const;


        //metody akcesorów są publiczne i tylko w przy ich pomocy
        //można się dostać z zewnątrz do pól klasy
        double GetX() const;
        double GetY() const;

        //metody seterów pozwalające zmienić stan obiektu
        //po jego zainicjalizowaniu
        void SetX(double x_);

        void SetY(double y_);

    };
    istream& operator>>(istream &is, Point2D& point);
    istream& operator<<(istream &is, Point2D& point);
}



#endif //JIMP_EXERCISES_GEOMETRY_H

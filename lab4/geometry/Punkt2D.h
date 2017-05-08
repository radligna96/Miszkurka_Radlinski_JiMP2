//
// Created by miszk on 3/25/2017.
//

#ifndef JIMP_EXERCISES_GEOMETRY_H
#define JIMP_EXERCISES_GEOMETRY_H

#include <string>
#include <iostream>

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
        ~Point2D();

        //Metody nie modyfikujące stanu obiektu (const na końcu metody)
        //nie mogą zmodyfikować tego obiektu.
        void ToString(std::ostream *out) const;
        double Distance(const Point2D &other) const;


        //metody akcesorów są publiczne i tylko w przy ich pomocy
        //można się dostać z zewnątrz do pól klasy
        double GetX() const;
        double GetY() const;

        //metody seterów pozwalające zmienić stan obiektu
        //po jego zainicjalizowaniu
        void SetX(double x_) {
                Point2D::x_ = x_;
        }

        void SetY(double y_) {
                Point2D::y_ = y_;
        }

    };
    std::istream& operator>>(std::istream &is, Point2D& point);
    std::istream& operator<<(std::istream &is, Point2D& point);
}



#endif //JIMP_EXERCISES_GEOMETRY_H

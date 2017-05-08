//
// Created by miszk on 3/25/2017.
//

#ifndef JIMP_EXERCISES_GEOMETRY_H
#define JIMP_EXERCISES_GEOMETRY_H

#include <string>
#include <iostream>

namespace geometry{

    class Point {
    public:
        //Konstruktor bezparametrowy
        Point();
        //Konstruktor parametrowy
        Point(double x, double y);
        //Destruktor wykonywany przed zwolnieniem pamięci
        ~Point();

        //Metody nie modyfikujące stanu obiektu (const na końcu metody)
        //nie mogą zmodyfikować tego obiektu.
        void ToString(std::ostream *out) const;
        double Distance(const Point &other) const;


        //metody akcesorów są publiczne i tylko w przy ich pomocy
        //można się dostać z zewnątrz do pól klasy
        double GetX() const;
        double GetY() const;

        //metody seterów pozwalające zmienić stan obiektu
        //po jego zainicjalizowaniu
        void SetX(double x);
        void SetY(double y);
    private:
        //w przeciwienstwie do pythona C++ wymaga jawnej deklaracji składowych pól klasy:
        double x_, y_;
    };

    class Square{
    public:
        Square(Point A, Point B, Point C, Point D);
        ~Square(){};
        double Circumference();
        double Area();
    private:
        //int ax, ay, bx, by, cx, cy, dy, dx;
        Point A_;
        Point B_;
        Point C_;
        Point D_;
    };

}

#endif //JIMP_EXERCISES_GEOMETRY_H

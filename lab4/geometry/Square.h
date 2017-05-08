//
// Created by miszk on 3/25/2017.
//

#ifndef JIMP_EXERCISES_SQUARE_H
#define JIMP_EXERCISES_SQUARE_H

#include "Point.h"

namespace geometry
{
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



#endif //JIMP_EXERCISES_SQUARE_H

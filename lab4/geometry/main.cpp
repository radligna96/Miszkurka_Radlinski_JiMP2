//
// Created by miszk on 3/25/2017.
//


#include "Geometry.h"

int main()
{
    geometry::Point p1{5, 0};
    geometry::Point p2{0, 0};
    geometry::Point p3{5, 5};
    geometry::Point p4{0, 5};

    geometry::Square my_square{p1, p2, p3, p4};
    std::cout<<"circumference: "<<my_square.Square::Circumference()<<std::endl;
    std::cout<<"area: "<<my_square.Square::Area()<<std::endl;
    return 0;
}
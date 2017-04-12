//
// Created by miszk on 3/25/2017.
//


#include "Punkt3D.h"
using geometry::Point3D;

int main()
{
    /*geometrylab7::Point p1{5, 0};
    geometrylab7::Point p2{0, 0};
    geometrylab7::Point p3{5, 5};
    geometrylab7::Point p4{0, 5};

    geometrylab7::Square my_square{p1, p2, p3, p4};
    std::cout<<"circumference: "<<my_square.Square::Circumference()<<std::endl;
    std::cout<<"area: "<<my_square.Square::Area()<<std::endl;
    */

    geometry::Point p2;
   // std::cin << p2;
    std::cin >> p2;
    p2.ToString(&std::cout);


    return 0;
}
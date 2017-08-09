//
// Created by miszk on 3/25/2017.
//

/*

 zad. 5.
Konstruktor 2D
konstruktor 3D
destruktor 3D
destruktor 2D

 zad. 6.
distance liczony jest w dwoch wymiarach (bo wywolany dla punktu 2d)

 zad. 7.
wypisze sie wspolrzedna x i y (bez z).

 */

#include "Punkt3D.h"
using geometry::Point3D;

#include <sstream>

int main()
{

    geometry::Point2D p2;
    geometry::Point2D p3;
    std::cin >> p2 >> p3;
    std::cout<<p2<<p3;



    return 0;
}
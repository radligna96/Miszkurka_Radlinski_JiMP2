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
    //std::cin >> p2;
    geometry::Point3D p1(4,3,0);
    //std::cin >> p1;
    cout<<p2.Distance(p1)<<endl;        //distance tez liczony jest bez ostatniej wartosci Point3D

    p2.ToString(&cout);
    cout<<endl;

    std::stringstream p;
    std::string o = "(5,4)";
    p << o;
    p>>p2;
    p2.ToString(&cout);
    cout<<p2;   // dla Point3D daje tylko dwie pierwsze wartosci
    cout<<p1;
    cout<<endl;


    return 0;
}
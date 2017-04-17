//
// Created by miszk on 3/25/2017.
//


#include "Punkt3D.h"
using geometry::Point3D;

#include <sstream>

int main()
{

    geometry::Point2D p2;
    //std::cin >> p2;
    geometry::Point3D p1(4,3,0);
    //std::cin >> p1;          // dziala ale mozna wprowadzic tylko dwie pierwsze wartosci, trzecia i tak sie nie zmieni
    cout<<p2.Distance(p1)<<endl;        //distance tez liczony jest bez ostatniej wartosci Point3D

    p2.ToString(&cout);
    cout<<endl;

    std::stringstream p;
    std::string o = "(5,4)";
    p << o;
    p>>p2;
    p2.ToString(&cout);
    cout<<p2;   // dziala ale dla Point3D daje tylko dwie pierwsze wartosci
    cout<<p1;
    cout<<endl;


    return 0;
}
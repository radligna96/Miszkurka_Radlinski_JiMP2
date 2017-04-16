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
    cout<<p2.Distance(p1)<<endl;

    p2.ToString(&cout);
    cout<<endl;

    std::stringstream p;
    std::string o = "(5,4)";
    p << o;
    p<<p2;
    p2.ToString(&cout);
    cout<<endl;


    return 0;
}
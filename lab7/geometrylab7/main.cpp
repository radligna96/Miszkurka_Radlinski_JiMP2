//
// Created by miszk on 3/25/2017.
//


#include "Punkt3D.h"
using geometry::Point3D;

int main()
{
    Point2D p1;
    p1.ToString(&cout);

    Point2D p2(1,4);
    p2.ToString(&cout);

    //cin >> p2;
    //p2.ToString(&cout);

    Point3D p3;
    p3.ToString(&cout);

    Point3D p4(3,4,5);
    p4.ToString(&cout);


    return 0;
}
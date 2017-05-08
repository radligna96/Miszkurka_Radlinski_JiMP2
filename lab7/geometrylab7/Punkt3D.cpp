//
// Created by radligna on 11.04.17.
//

#include "Punkt3D.h"
using geometry::Point3D;

Point3D::Point3D() : Point2D()
{
    cout << "konstruktor bezparametrowy Point3D" << endl;
    z = 0;
}

Point3D::Point3D(double x, double y, double _z) : Point2D(x, y) {
    cout << "konstruktor parametrowy Point3D" << endl;
    z = _z;
}

Point3D::~Point3D()
{
    cout << "destruktor Point3D" << endl;
}

double Point3D::GetZ() const
{
    return z;
}



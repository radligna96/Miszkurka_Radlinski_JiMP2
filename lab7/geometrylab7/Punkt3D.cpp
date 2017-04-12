//
// Created by radligna on 11.04.17.
//

#include "Punkt3D.h"
using geometry::Point3D;

Point3D::Point3D(double x, double y, double _z) : Point(x, y) {
    z = _z;
}
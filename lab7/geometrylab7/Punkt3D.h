//
// Created by radligna on 11.04.17.
//

#ifndef JIMP_EXERCISES_PUNKT3D_H
#define JIMP_EXERCISES_PUNKT3D_H

#include "Punkt2D.h"
using geometry::Point;



namespace geometry {

    class Point3D : public Point {
    public:

        Point3D(double x, double y, double _z);

    private:
    double z;

    };

}
#endif //JIMP_EXERCISES_PUNKT3D_H

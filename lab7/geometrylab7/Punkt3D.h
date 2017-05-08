//
// Created by radligna on 11.04.17.
//

#ifndef JIMP_EXERCISES_PUNKT3D_H
#define JIMP_EXERCISES_PUNKT3D_H

#include "Punkt2D.h"
using std::cout;
using std::endl;
using std::cin;
using geometry::Point2D;

namespace geometry {

    class Point3D : public Point2D {
    public:

        Point3D(double x, double y, double _z);
        Point3D();
        virtual ~Point3D();

        double GetZ() const;
        void SetZ(double z) {
            Point3D::z = z;
        }

    private:
    double z;

    };
}
#endif //JIMP_EXERCISES_PUNKT3D_H

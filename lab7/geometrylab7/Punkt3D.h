//
// Created by radligna on 11.04.17.
//

#ifndef JIMP_EXERCISES_PUNKT3D_H
#define JIMP_EXERCISES_PUNKT3D_H

#include "Punkt2D.h"
#include <cmath>
using geometry::Point2D;
using std::cout;
using std::cin;
using std::endl;



namespace geometry {

    class Point3D : public Point2D {
    public:

        Point3D(double x, double y, double _z);
        Point3D();
        ~Point3D();

        double GetZ() const;
        void SetZ(double z_);

        double Distance(const Point3D &other) const;


    private:
    double z_;

    };

}
#endif //JIMP_EXERCISES_PUNKT3D_H

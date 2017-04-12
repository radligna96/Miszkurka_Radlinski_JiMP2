//
// Created by radligna on 11.04.17.
//

#include "Punkt3D.h"
using geometry::Point3D;

Point3D::Point3D(double x, double y, double _z) : Point(x, y) {
    cout<<"konstruktor parametrowy 3D"<<endl;
    z_ = _z;
}

Point3D::Point3D() : Point(){
    cout<<"konstruktor bezparametrowy 3D"<<endl;
    z_ = 0;
}

double Point3D::GetZ() const
{
    return z_;
}

void Point3D::SetZ(double z_) {
    Point3D::z_ = z_;
}

double Point3D::Distance(const Point3D &other) const{
    return sqrt(pow(GetX()-other.GetX(),2)+pow(GetY()-other.GetY(),2)+pow(GetZ()-other.GetZ(),2));
}

Point3D::~Point3D() {
cout<<"destruktor 3D";
}

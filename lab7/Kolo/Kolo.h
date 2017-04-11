//
// Created by miszagni on 11.04.17.
//

#ifndef JIMP_EXERCISES_KOLO_H
#define JIMP_EXERCISES_KOLO_H



class Kolo
{
protected:
    double x, y, r;
public:
    double pole();
    Kolo(){};
    Kolo(double a, double b, double c);
    ~Kolo(){};

};
#endif //JIMP_EXERCISES_KOLO_H

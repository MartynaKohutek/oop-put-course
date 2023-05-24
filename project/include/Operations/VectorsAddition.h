#ifndef VectorsAddition_h
#define VectorsAddition_h
#include "./Operation.h"

class Vector
{
public:
    double x, y;
    Vector(double x = 0.0, double y = 0.0) : x(x), y(y) {}
    Vector operator+(const Vector& other) const;
};

class VectorsAddition: public Operation, public Vector
{
    double x1, x2, y1, y2;
public:
    double result;
    void Equation() override;
    VectorsAddition(){};

};

#endif

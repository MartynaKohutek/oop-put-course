#ifndef Subtraction_h
#define Subtraction_h
#include "./Operation.h"

class Subtraction: public Operation
{
    double a;
    double b;
public:
    double result;
    void Equation() override;
    Subtraction(){};

};

#endif

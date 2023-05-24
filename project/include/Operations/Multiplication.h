#ifndef Multiplication_h
#define Multiplication_h
#include "./Operation.h"

class Multiplication: public Operation
{
    double a;
    double b;
public:
    double result;
    void Equation() override;
    Multiplication(){};

};

#endif

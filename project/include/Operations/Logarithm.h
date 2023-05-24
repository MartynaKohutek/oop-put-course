#ifndef Logarithm_h
#define Logarithm_h
#include "./Operation.h"


class Logarithm: public Operation
{
    double base;
    double a;
public:
    double result;
    void Equation() override;
    Logarithm(){};

};

#endif

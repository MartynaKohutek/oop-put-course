#ifndef Factorial_h
#define Factorial_h
#include "./Operation.h"

class Factorial: public Operation
{
    double n;
public:
    double result;
    void Equation() override;
    Factorial(){};

};

#endif

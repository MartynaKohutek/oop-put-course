#ifndef Exponentiation_h
#define Exponentiation_h
#include "./Operation.h"

class Exponentiation: public Operation
{
    double base;
    int index;
public:
    double result;
    void Equation() override;
    Exponentiation(){};

};

#endif

#ifndef Cotangens_h
#define Cotangens_h
#include "./Operation.h"

class Cotangens: public Operation
{
    double x;
    double angle;
public:
    double result;
    void Equation() override;
    Cotangens(){};

};

#endif

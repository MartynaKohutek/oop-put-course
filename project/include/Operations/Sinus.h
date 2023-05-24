#ifndef Sinus_h
#define Sinus_h
#include "./Operation.h"

class Sinus: public Operation
{
    double x;
    double angle;
public:
    double result;
    void Equation() override;
    Sinus(){};

};

#endif

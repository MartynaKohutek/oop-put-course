#ifndef Tangens_h
#define Tangens_h
#include "./Operation.h"

class Tangens: public Operation
{
    double x;
    double angle;
public:
    double result;
    void Equation() override;
    Tangens(){};

};

#endif

#ifndef Modulo_h
#define Modulo_h
#include "./Operation.h"

class Modulo: public Operation
{
    double a;
    double b;
public:
    double result;
    void Equation() override;
    Modulo(){};

};

#endif

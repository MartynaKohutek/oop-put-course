#ifndef ADDITION_H
#define ADDITION_H
#include "./Operation.h"

class Addition: public Operation
{
    double a;
    double b;
public:
    double result;
    void Equation() override;
    Addition(){};

};

#endif

#ifndef Division_h
#define Division_h
#include "./Operation.h"

class Division: public Operation
{
    double a;
    double b;
public:
    double result;
    void Equation() override;
    Division(){};

};

#endif

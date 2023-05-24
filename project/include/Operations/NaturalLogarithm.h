#ifndef NaturalLogarithm_h
#define NaturalLogarithm_h
#include "./Operation.h"


class NaturalLogarithm: public Operation
{
    double a; //liczba logarytmowana
public:
    double result;
    void Equation() override;
    NaturalLogarithm(){};

};

#endif

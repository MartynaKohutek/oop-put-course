#ifndef Cosinus_h
#define Cosinus_h
#include "./Operation.h"

class Cosinus: public Operation
{
    double x; //k¹t podnay
    double angle; //kat w radianach ((kat * M_PI / 180.0)
public:
    double result;
    void Equation() override;
    Cosinus(){};

};

#endif

#ifndef Calculator_h
#define Calculator_h
#include "./Operation.h"
#include "./Addition.h"
#include "./Subtraction.h"
#include "./Multiplication.h"
#include "./Division.h"
#include "./Exponentiation.h"
#include "./Sinus.h"
#include "./Cosinus.h"
#include "./Tangens.h"
#include "./Cotangens.h"
#include "./Logarithm.h"
#include "./NaturalLogarithm.h"

class Calculator : public Operation, public Addition, public Subtraction, public Multiplication,
public Division, public Sinus, public Cosinus, public Tangens, public Cotangens, public Exponentiation,
public Logarithm, public NaturalLogarithm {
public:
    void Equation() override;
    int Calculation();
    Calculator(){};

};

#endif

#include <iostream>
#include <cmath>
#include "Addition.h"
#include "Subtraction.h"
#include "Operation.h"
#include "Multiplication.h"
#include "Division.h"
#include "Exponentiation.h"
#include "Sinus.h"
#include "Cosinus.h"
#include "Tangens.h"
#include "Cotangens.h"
#include "Logarithm.h"
#include "NaturalLogarithm.h"
#include "Calculator.h"

using namespace std;

void Addition::Equation()
{
    cout << "You chose addition!" << endl;
    cout << "Write in number 'a': "<< endl;
    cin >> a;
    cout << "Write in number 'b': "<< endl;
    cin >> b;
    result = a+b;
    cout << "Your operation: " << a << " + " << b << " = " << result <<endl;
};


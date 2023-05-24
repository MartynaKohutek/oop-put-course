#include <iostream>
#include <cmath>
#include "Multiplication.h"
#include "Operation.h"

using namespace std;

void Multiplication::Equation()
{
    cout << "You chose multiplication!" << endl;
    cout << "Write in number 'a': "<< endl;
    cin >> a;
    cout << "Write in number 'b': "<< endl;
    cin >> b;
    result = a*b;
    cout << "Your operation: " << a << " * " << b << " = " << result << endl;
};

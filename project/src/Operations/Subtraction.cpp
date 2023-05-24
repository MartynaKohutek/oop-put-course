#include <iostream>
#include <cmath>
#include "Subtraction.h"
#include "Operation.h"

using namespace std;

void Subtraction::Equation()
{
    cout << "You chose subtraction!" << endl;
    cout << "Write in number 'a': "<< endl;
    cin >> a;
    cout << "Write in number 'b': "<< endl;
    cin >> b;
    result = a-b;
    cout << "Your operation: " << a << " - " << b << " = " << result << endl;
};

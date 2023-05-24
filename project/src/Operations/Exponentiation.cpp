#include <iostream>
#include <cmath>
#include "Exponentiation.h"
#include "Operation.h"

using namespace std;

void Exponentiation::Equation()
{
    cout << "You chose exponentiation!" << endl;
    cout << "Write in base 'x': "<< endl;
    cin >> base;
    cout << "Write in index 'a': "<< endl;
    cin >> index;
    result = 1;
    for (int i=0; i<index; i++)
    {
        result = result*base;
    }

    cout << "Your operation: " << base << " ^ " << index << " = " << result << endl;
};

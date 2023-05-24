#include <iostream>
#include <cmath>
#include "Modulo.h"
#include "Operation.h"

using namespace std;

void Modulo::Equation()
{
    cout << "You chose modulo!" << endl;
    cout << "Write in number 'a': "<< endl;
    cin >> a;
    cout << "Write in number 'b': "<< endl;
    cin >> b;
    result = fmod(a,b);

    cout << "Your operation: " << a << "%" << b << " = " << result << endl;
};

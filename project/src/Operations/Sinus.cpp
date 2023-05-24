#include <iostream>
#include <cmath>
#include "Sinus.h"
#include "Operation.h"

using namespace std;

void Sinus::Equation()
{
    cout << "You chose sine calculation!" << endl;
    cout << "Write in angle in degrees: "<< endl;
    cin >> x;
    angle = x * M_PI / 180.0;
    result = sin(angle);
    cout << "Your operation: sin(" << x << ") = " << result << endl;
};

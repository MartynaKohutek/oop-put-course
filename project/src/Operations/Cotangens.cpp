#include <iostream>
#include <cmath>
#include <iomanip>
#include "Cotangens.h"
#include "Operation.h"

using namespace std;

void Cotangens::Equation()
{
    cout << "You chose cotangent calculation!" << endl;
    cout << "Write in angle in degrees: "<< endl;
    cin >> x;
    angle = x * M_PI / 180.0;
    result = (1/tan(angle));
    cout << "Your operation: cot(" << x << ") = " << result << endl;
};

#include <iostream>
#include <cmath>
#include "Tangens.h"
#include "Operation.h"

using namespace std;

void Tangens::Equation()
{
    cout << "You chose tangent calculation!" << endl;
    cout << "Write in angle in degrees: "<< endl;
    cin >> x;
    angle = x * M_PI / 180.0;
    result = tan(angle);
    cout << "Your operation: tan(" << x << ") = " << result << endl;
};

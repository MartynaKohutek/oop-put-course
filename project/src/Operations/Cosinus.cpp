#include <iostream>
#include <cmath>
#include "Cosinus.h"
#include "Operation.h"

using namespace std;

void Cosinus::Equation()
{
    cout << "You chose cosine calculation!" << endl;
    cout << "Write in angle in degrees: "<< endl;
    cin >> x;
    angle = x * M_PI / 180.0;
    result = cos(angle);
    cout << "Your operation: cos(" << x << ") = " << result << endl;
};

#include <iostream>
#include <cmath>
#include "Factorial.h"
#include "Operation.h"

using namespace std;

void Factorial::Equation()
{
    cout << "You chose factorial!" << endl;
    cout << "Write in number 'n': "<< endl;
    cin >> n;
    double s = n-1;
    result = n;
    for (int i=0; i<n-2; i++)
    {
        result = result*s;
        s--;
    }

    cout << "Your operation: " << n << "! = " << result << endl;
};

#include <iostream>
#include <cmath>
#include <stdexcept>
#include "Logarithm.h"
#include "Operation.h"

using namespace std;

void Logarithm::Equation()
{
    cout << "You chose logarithm calculation!" << endl;
    cout << "Write in base: "<< endl;
    cin >> base;
    cout << "Write in number 'a': "<< endl;
    cin >> a;

    try
    {
        if (base <= 0)
    {
        throw runtime_error("Base <= 0!");
    }
    if (base == 1)
    {
        throw runtime_error("Base = 1!");
    }
    if (a <= 0)
    {
        throw runtime_error("Number 'a' <= 0!");
    }
        result = log(a)/log(base);
        cout << "Your operation: " << "log" << base << "(" << a << ") = " << result << endl;
    }
    catch (const exception& ex)
    {
        cout << "Exception caught: " << ex.what() << endl;
        cout << "Try again!!" << endl;

    }

};

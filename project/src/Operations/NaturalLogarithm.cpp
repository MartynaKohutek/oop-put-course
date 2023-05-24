#include <iostream>
#include <cmath>
#include <stdexcept>
#include "NaturalLogarithm.h"
#include "Operation.h"

using namespace std;

void NaturalLogarithm::Equation()
{
    cout << "You chose logarithm calculation!" << endl;
    cout << "Write in number 'a': "<< endl;
    cin >> a;
    try
    {
        if (a <= 0)
    {
        throw runtime_error("Number 'a' <= 0!");
    }

    result = log(a);
    cout << "Your operation: " << "ln" << a << " = " << result << endl;
    }
    catch (const exception& ex)
    {
        cout << "Exception caught: " << ex.what() << endl;
        cout << "Try again!!" << endl;

    }
};

#include <iostream>
#include <cmath>
#include "Division.h"
#include "Operation.h"

using namespace std;

void Division::Equation()
{

    cout << "You chose division!" << endl;
    cout << "Write in number 'a': "<< endl;
    cin >> a;
    cout << "Write in number 'b': "<< endl;
    cin >> b;

    try
    {
        if (b == 0)
    {
        throw runtime_error("Division by zero!!");
    }
        result = a/b;
        cout << "Your operation: " << a << " / " << b << " = " << result << endl;
    }
    catch (const exception& ex)
    {
        cout << "Exception caught: " << ex.what() << endl;
        cout << "Try again!" << endl;
    }

};

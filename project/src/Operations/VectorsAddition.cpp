#include <iostream>
#include <cmath>
#include "VectorsAddition.h"
#include "Operation.h"

using namespace std;

Vector Vector::operator+(const Vector& other) const
{
   return Vector(x + other.x, y + other.y);
}

void VectorsAddition::Equation()
{
    cout << "You chose vectors addition!" << endl;
    cout << "Write in first vector v1: "<< endl;
    cout << "Write in number 'x1': "<< endl;
    cin >> x1;
    cout << "Write in number 'y1': "<< endl;
    cin >> y1;
    cout << "Write in first vector v2: "<< endl;
    cout << "Write in number 'x2': "<< endl;
    cin >> x2;
    cout << "Write in number 'y2': "<< endl;
    cin >> y2;

    Vector v1(x1, y1);
    Vector v2(x2, y2);
    Vector result = v1 + v2;

    cout << "Your operation: v1(" << x1 << ", " << y1 << ") + v2(" << x2 << ", " << y2 << ") = v3(" << result.x << ", " << result.y << ")" << endl;
};

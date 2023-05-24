#include <iostream>
#include <cmath>
#include <stdexcept>
#include "Calculator.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Operation.h"
#include "Multiplication.h"
#include "Division.h"
#include "Exponentiation.h"
#include "Sinus.h"
#include "Cosinus.h"
#include "Tangens.h"
#include "Cotangens.h"
#include "Logarithm.h"
#include "NaturalLogarithm.h"
#include "Factorial.h"
#include "Modulo.h"
#include "VectorsAddition.h"
using namespace std;

void Calculator::Equation()
{
    cout << "solution" << endl;

}
int Calculator::Calculation()
{
    cout << "WELCOME TO THE CALCULATOR!!" << endl;
    int option;
    while (option != 0)
    {
        cout << endl;
        cout << "**************************" << endl;
        cout << "Choose an operation: " << endl;
        cout << "0 - end of program" << endl;
        cout << "1 - addition" << endl;
        cout << "2 - subtraction" << endl;
        cout << "3 - multiplication" << endl;
        cout << "4 - division" << endl;
        cout << "5 - sine" << endl;
        cout << "6 - cosine" << endl;
        cout << "7 - tangent" << endl;
        cout << "8 - cotangent" << endl;
        cout << "9 - logarithm with any base" << endl;
        cout << "10 - natural logarithm" << endl;
        cout << "11 - exponentiation" << endl;
        cout << "12 - factorial" << endl;
        cout << "13 - modulo" << endl;
        cout << "14 - vectors addition" << endl;
        cout << "your option: ";
        cin >> option;
        cout << endl;

        if (option == 0)
        {
            cout << "END OF PROGRAM";
            return 0;
        }
        if (option == 0  || option == 1 || option == 2 || option == 3 || option == 4 ||
            option == 5 || option == 6 || option == 7 || option == 8 || option == 9
            || option == 10 || option == 11 || option == 12 || option == 13 || option == 14)
        {
            switch (option)
            {
            case 1:
                {
                     Addition addition;
                     addition.Equation();
                     break;

                }


            case 2:
                {
                    Subtraction subtraction;
                    subtraction.Equation();
                    break;
                }

            case 3:
                {
                    Multiplication multiplication;
                    multiplication.Equation();
                    break;

                }

            case 4:
                {
                    Division division;
                    division.Equation();
                    break;
                }

            case 5:
                {
                    Sinus sinus;
                    sinus.Equation();
                    break;
                }

            case 6:
                {
                    Cosinus cosinus;
                    cosinus.Equation();
                    break;
                }

            case 7:
                {
                    Tangens tangens;
                    tangens.Equation();
                    break;
                }

            case 8:
                {
                    Cotangens cotangens;
                    cotangens.Equation();
                    break;
                }

            case 9:
                {
                    Logarithm logarithm;
                    logarithm.Equation();
                    break;
                }

            case 10:
                {
                    NaturalLogarithm naturallogarithm;
                    naturallogarithm.Equation();
                    break;
                }

            case 11:
                {
                    Exponentiation exponentiation;
                    exponentiation.Equation();
                    break;
                }
            case 12:
                {
                    Factorial factorial;
                    factorial.Equation();
                    break;
                }

            case 13:
                {
                    Modulo modulo;
                    modulo.Equation();
                    break;
                }

            case 14:
                {
                    VectorsAddition vectorsaddition;
                    vectorsaddition.Equation();
                    break;

                }

            default:
                {
                    cout << "There is no such option!";
                    break;
                }



            }



        }
        else
        {
            cout << "There is no such option!" << endl;
            continue;
        }
    }

}

int main()
{

    Calculator calculator;
    calculator.Calculation();
    return 0;
}

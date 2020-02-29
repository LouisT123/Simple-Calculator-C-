/******************************************************************************
* Project name: Calculator tutorial from Microsoft Docs https://docs.microsoft.com/en-us/cpp/get-started/tutorial-console-cpp?view=vs-2019
* Filename: CalculatorTutorialC++.cpp
* Author: Louis Taing
* Date: 02/29/20
* Description: Main function
******************************************************************************/
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "Calculator.h"
using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double answer = 0.0;
    char oper = '+';

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
        << endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Division by zero" << endl;
            continue;
        }
        else
        {
            answer = c.Calculate(x, oper, y);
        }
      
        cout << "Answer is: " << answer << endl << endl;

        break;
    }
    
  
    
}
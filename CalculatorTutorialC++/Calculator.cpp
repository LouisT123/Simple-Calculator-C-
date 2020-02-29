/******************************************************************************
* Project name: Calculator tutorial from Microsoft Docs https://docs.microsoft.com/en-us/cpp/get-started/tutorial-console-cpp?view=vs-2019
* Filename: Calculator.cpp
* Author: Louis Taing
* Date: 02/29/20
* Description: Calculate function of Calculator class
******************************************************************************/
#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		return 0.0;
	}
}

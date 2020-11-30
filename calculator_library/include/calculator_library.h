#pragma once

#include "calculator_marcos.h"

class WIN_EXPORT Calculator
{
public:
	Calculator();
	~Calculator();

	int Add(int n1, int n2);
	int Sub(int n1, int n2);
};

extern "C" WIN_EXPORT
int Calculator_Add(int n1, int n2)
{
	return (new Calculator())->Add(n1, n2);
}

extern "C" WIN_EXPORT
char* HelloWorld()
{
	return "Hello World From C++";
}
#pragma once

#include "calculator_marcos.h"

class DECLSPEC Calculator
{
public:
	Calculator();
	~Calculator();

	int Add(int n1, int n2);
	int Sub(int n1, int n2);
};

extern "C" DECLSPEC
int Calculator_Add(int n1, int n2)
{
	return (new Calculator())->Add(n1, n2);
}

extern "C" DECLSPEC
int HelloWorld()
{
	return 123;
}
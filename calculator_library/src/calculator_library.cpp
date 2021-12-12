#include "calculator_library.h"
#include <iostream>
#include <signal.h>
#include <setjmp.h>

Calculator::Calculator()
{
}

Calculator::~Calculator()
{
}

int Calculator::Add(int n1, int n2)
{
	return n1 + n2;
}

int Calculator::Sub(int n1, int n2)
{
	return n1 - n2;
}

jmp_buf env;

void handler(int x)
{
	std::cout << "Signal " << x << std::endl;
	longjmp(env, x);
}

double Calculator::Div(int n1, int n2)
{
	using namespace std;
	signal(SIGFPE, handler);

	if (setjmp(env))
	{
		return -1;
	}
	else
	{
		return n1 / n2;
	}
}
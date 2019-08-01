#include <iostream>
#include "include/calculator_library.h"

using namespace std;

int main()
{
	Calculator calcualtor;
	cout << "1 + 2 = " << calcualtor.Add(1, 2) << endl;
	system("pause");
	return 0;
}
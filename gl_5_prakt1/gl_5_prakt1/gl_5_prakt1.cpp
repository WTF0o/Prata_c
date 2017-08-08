// gl_5_prakt1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	short i, g;
	int suum=0;
	cout << "Vvedite i g:";
	cin >> i >> g;

	for (; i < g+1; i++)
	{
		suum += i;
	}
	cout << "summa: " << suum << endl;
	system("pause");
    return 0;
}


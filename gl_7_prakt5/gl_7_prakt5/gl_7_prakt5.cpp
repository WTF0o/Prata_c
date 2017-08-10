// gl_7_prakt5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int faktor(int);

int main()
{
	int fak = 0;
	int result = 0;
	cout << "Vvedite fak: ";
	while (cin >> fak)
	{
		result = faktor(fak);
		cout << "!" << fak << "=" << result << endl;
		cout << "Vvedite fak: ";
	}
	system("pause");
    return 0;
}

int faktor(int fak)
{
	int result;
	if (fak == 1 || fak == 0)
	{
		return 1;
	}
	result = fak*faktor(fak - 1);
	return result;
}
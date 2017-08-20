// gl_8_prakt5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
const int limit = 5;
template <typename T>
double max5(T mas[]);

int main()
{
	int mas_int[limit];
	double mas_duble[limit];
	for (int i = 0; i < limit; i++)
	{
		cout << "Vvedite #" << i + 1 << " element massiva" << endl;
		cin >> mas_int[i];
	}
	for (int i = 0; i < limit; i++)
	{
		cout << "Vvedite #" << i + 1 << " element massiva" << endl;
		cin >> mas_duble[i];
	}
	int max_int = max5(mas_int);
	cout << "Max element v mas_int: " << max_int << endl;
	double max_double = max5(mas_duble);
	cout << "Max element v mas_double: " << max_double << endl;
	system("pause");
    return 0;
}

template <typename T>
double max5(T mas[]) 
{
	double max = 0;
	for (int i = 0; i < limit; i++)
	{
		if (mas[i] > max)
			max = mas[i];
	}
	return max;
}


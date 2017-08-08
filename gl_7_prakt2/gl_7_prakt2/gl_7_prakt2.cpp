// gl_7_prakt2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <array>

using namespace std;
const short n = 10;

void show(array<double, n>,double);
void vvod(array<double,n> *);
double srd(array<double, n>);

int main()
{
	//double mas[n];
	array<double, n> mas;
	vvod(&mas);
	double avg=srd(mas);
	show(mas,avg);
	system("pause");
	return 0;
}

void vvod(array <double,n> * vvod_mas)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Vvedite element #" << i + 1 << ": ";
		cin >> (*vvod_mas) [i];
		if ((*vvod_mas)[i] < 0)
		{
			for (; i < n; i++)
			{
				(*vvod_mas)[i] = 0;
			}
			break;
		}
			
	}
}

double srd(array<double, n> srd_mas)
{
	int i = 0;
	double sum = 0;
	for (; i < n; i++)
	{
		sum += srd_mas[i];
	}
	return sum / i;
}

void show(array <double, n> show_mas, double avg)
{
	for (int i = 0; i < n; i++)
	{
		cout << show_mas[i] << "  ";
	}
	cout << endl;
	cout << "avg: " << avg << endl;
}

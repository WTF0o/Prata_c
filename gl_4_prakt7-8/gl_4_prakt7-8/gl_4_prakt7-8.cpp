// gl_4_prakt7-8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

struct William
{
	string name;
	double diametr;
	double ves;
};

int main()
{
	setlocale(0, "");
	int size;
	cout << "Vvedite kol. picci: ";
	cin >> size;
	William *company = new William[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Picca №" << i + 1 << endl;
		cout << "Vvedite diametr: ";
		cin >> company[i].diametr;
		cout << "Vvedite name: ";
		cin >> company[i].name;
		cout << "Vvedite ves: ";
		cin >> company[i].ves;
	}
	for (int i = 0; i < size; i++)
	{
		cout << "Picca №" << i + 1 << endl;
		cout << "Diametr: " << company[i].diametr << endl;
		cout << "name: " << company[i].name << endl;
		cout << "ves: " << company[i].ves << endl;
		
	}
	system("pause");
    return 0;
}


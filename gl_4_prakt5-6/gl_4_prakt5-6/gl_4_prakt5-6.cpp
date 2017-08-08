// gl_4_prakt5-6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

struct CandyBar
{
	string name;
	double ves;
	int cal;
};

int main()
{
	int size;
	cout << "Vvedite razmer: ";
	cin >> size;
	CandyBar *snack = new CandyBar[size];
	for (int i = 0; i < 1; i++)
	{
		cout << "Vvedite callorii: ";
		cin >> snack[i].cal;
		cout << "Vvedite name: ";
		cin >> snack[i].name;
		cout << "Vvedite ves: ";
		cin >> snack[i].ves;
	}
	for (int i = 0; i < 1; i++)
	{
		cout << "Kol. kollorii: " << snack[i].cal << endl;
		cout << "Name:  " << snack[i].name << endl;
		cout <<"Ves: "<< snack[i].ves<<endl;
	}
	system("pause");
    return 0;
}


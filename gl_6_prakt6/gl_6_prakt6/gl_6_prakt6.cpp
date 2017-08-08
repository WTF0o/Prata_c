// gl_6_prakt6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct MyStruct
{
	string name;
	double pojertvovanie;
};

int main()
{
	short n;
	cout << "Vvedite kol 4elovek: ";
	cin >> n;
	MyStruct *person = new MyStruct[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Vvedite name: ";
		cin >> person[i].name;
		cout << "Vvedite symmmy: ";
		cin >> person[i].pojertvovanie;
	}
	for (int i = 0; i < 1; ++i)
	{
		cout << "grand patrons: " << endl;
		for (int j = 0; j < n; j++)
		{
			if (person[j].pojertvovanie>10000)
			{
				cout << person[j].name << "\t" << person[j].pojertvovanie << endl;
			}
		}
		cout << "patrons: " << endl;
		for (int j = 0; j < n; j++)
		{
			if (person[j].pojertvovanie<10000)
			{
				cout << person[j].name << "\t" << person[j].pojertvovanie << endl;
			}
		}
	}
	system("pause");
	delete person;
    return 0;
}


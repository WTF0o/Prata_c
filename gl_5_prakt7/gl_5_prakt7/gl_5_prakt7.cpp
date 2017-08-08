// gl_5_prakt7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
struct car
{
	string name;
	int age;
};

int main()
{
	setlocale(0, "");
	short count;
	cout << "Введите количество машин: ";
	cin >> count;
	car *person_car = new car[count];
	for (int i = 0; i < count; i++)
	{
		cout << "Автомобиль №" << i + 1 << endl;
		cout << "Введите производителя: ";
		cin >> person_car[i].name;
		cout << "Введите год: ";
		cin >> person_car[i].age;
	}
	cout << "Вот ваша коллекция: " << endl;
	for (int i = 0; i < count; i++)
	{
		cout << person_car[i].name << "\t" << person_car[i].age << endl;
	}
	delete person_car;
	system("pause");
    return 0;
}


// gl_5_prakt7.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout << "������� ���������� �����: ";
	cin >> count;
	car *person_car = new car[count];
	for (int i = 0; i < count; i++)
	{
		cout << "���������� �" << i + 1 << endl;
		cout << "������� �������������: ";
		cin >> person_car[i].name;
		cout << "������� ���: ";
		cin >> person_car[i].age;
	}
	cout << "��� ���� ���������: " << endl;
	for (int i = 0; i < count; i++)
	{
		cout << person_car[i].name << "\t" << person_car[i].age << endl;
	}
	delete person_car;
	system("pause");
    return 0;
}


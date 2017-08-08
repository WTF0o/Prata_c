
// gl_5_prakt5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>;
#include <string>;

using namespace std;

int main()
{
	setlocale(0, "");
	string mesiac[] =
	{ "Январь",
	"Февраль",
	"Март",
	"Апрель",
	"Май",
	"Июнь",
	"Июль",
	"Август",
	"Сентябрь",
	"Октябрь",
	"Ноябрь",
	"Декабрь" };
	int mas[12] [3];
	int sum=0;
	for (int i = 0; i < 12; i++)
	{
		cout << "Введите объем продаж за " << mesiac[i] << " :"<<endl;
		for (int j = 0; j < 3; j++)
		{
			cout << "Продажа за " << j+1 << "год: ";
			cin >> mas[i][j];
			sum += mas[i][j];
		}
	}
	cout << "Сумма за все месяца: " << sum << endl;
	system("pause");
    return 0;
}


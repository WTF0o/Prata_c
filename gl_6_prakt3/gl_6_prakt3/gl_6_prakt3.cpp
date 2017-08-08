// gl_6_prakt3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Введите одну из 4 букв: \n"
		"А \tB \n"
		"C \tD \n"<<endl;
	char ch;
	metka:
	cout << "Введите значение: ";
	cin >> ch;
	switch (ch)
	{
	case'A':cout << "Вы ввели А";
		break;
	case'B':cout << "Вы ввели B";
		break;
	case'C':cout << "Вы ввели C";
		break;
	case'D':cout << "Вы ввели D";
		break;
	default: goto metka;
		break;
	}
	system("pause");
    return 0;
}


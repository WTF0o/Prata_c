// gl_8_prakt3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void show(string & str);

int main()
{
	string str;
	cout << "Vvedite stroky: " << endl;
	cin >> str;
	show(str);
	system("pause");
    return 0;
}

void show(string & str)
{
	cout << str;
	cout << "Vvedite str(q quit): ";
	while (cin>>str && str!="q")
	{
		cout << str << endl;
		cout << "Vvedite str(q quit): ";
	}
}


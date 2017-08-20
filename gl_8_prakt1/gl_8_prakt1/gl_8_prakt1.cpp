// gl_8_prakt1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void funk(string str, short & count, int n = 0);

int main()
{
	short count_funk=0;
	string str;
	int n;
	cout << "Vvedite strocy: " << endl;
	cin >> str;
	cout << "Vvedite n: ";
	cin >> n;
	funk(str, count_funk);
	funk(str, count_funk);
	funk(str, count_funk);
	funk(str, count_funk,n);
	system("pause");
    return 0;
}

void funk(string str, short & count, int n )
{
	++count;
	if (n != 0)
	{
		cout << "Kol vizivov funk #" << count-1 << endl;
		for (int i = 0; i<count-1; i++)
		{

			cout << "Stroka #" << i + 1 << "\t" << str << endl;
		}
	}
	else
		cout << "Kol vizivov funk #" << count << "\t" << str << endl;
}

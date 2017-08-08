// gl_6_prakt2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double mas[10];
	int kol=0;
	double avg=0;
	int i = 0;
	for (; i < 10; i++)
	{
		cout << "Vvedite #" << i + 1 << "  zna4enie: ";
		cin >> mas[i];
		if (isdigit(mas[i]))
		{
			cin.clear();
			break;
		}
		avg += mas[i];
	}
	cout << i<<endl;
	avg = avg / i;
	for (int j = 0; j < i; j++)
	{
		if (avg < mas[j])
		{
			kol++;
		}
			
	}

	cout << "AVG=" << avg << endl;
	cout << "Kol=" << kol << endl;
	system("pause");
    return 0;
}


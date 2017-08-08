// gl_6_prakt5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Vvedite vahs dohod: ";
	long dohod;
	double nalog = 0;
	double white_dohod = 0;
	cin >> dohod;
	while (dohod>0)
	{
		if (islower(dohod))
			break;
		if (dohod >= 10000)
		{
			nalog += 10000 * 0.10;
			if (dohod>20000)
			{
				nalog += 20000 * 0.15;
				if (dohod>35000)
				{
					nalog += 35000 * 0.20;
				}
			}
		}
		white_dohod = dohod - nalog;
		cout << "4isti dohod " << white_dohod << endl;
		cout << "Vash nalog: " << nalog << endl;
		white_dohod = 0;
		nalog = 0;
		cout << "Vvedite vahs dohod: ";
		cin >> dohod;
	}
	system("pause");
    return 0;
}


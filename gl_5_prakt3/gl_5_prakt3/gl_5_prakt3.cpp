// gl_5_prakt3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int sum=0;
	int *vvod=new int;
	int i = 0;
	for (;;)
	{
		*vvod = 0;
		cout << "Vvedite 4islo nomer" << i << ": ";
		cin >> *vvod;
		if (*vvod == 0)break;
		sum += *vvod;
		i++;
	}
	delete vvod;
	cout << sum << endl;
	system("pause");
    return 0;
}


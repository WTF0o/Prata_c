// gl_7_prakt1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
double srd(int, int);

int main()
{
	int x, y;
	cout << "Vvedite x and y"<<endl;
	while (cin>>x>>y)
	{
		if (x == 0 || y == 0)
			break;
		cout << "SRD: " << srd(x,y) << endl;
		cout << "Vvedite 4islo" << endl;
	}
	system("pause");
    return 0;
}

double srd(int x, int y)
{
	return 2.0*x*y / (x + y);
}
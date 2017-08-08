// gl_5_prakt4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;

int main()
{
    double dafna = 100;
	double kleo = 100;
	int i = 1;
	do
	{
		cout << i << " god:" << endl;
		dafna +=(100* 0.10);
		kleo += (kleo * 0.05);
		cout << dafna << "\t" << kleo << endl;
		i++;
	} while (kleo <=dafna);
	system("pause");
    return 0;
}


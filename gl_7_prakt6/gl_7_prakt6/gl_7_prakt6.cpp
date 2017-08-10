// gl_7_prakt6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int fill_array(double mas[], short );
void show_array(double mas[], short);
void reverse_array(double mas[], short);

int main()
{
	short n;
	cout << "Vvedite razmer massiva: ";
	cin >> n;
	double *mas=new double[n];
	fill_array(mas, n);
	show_array(mas, n);
	cout <<endl;
	reverse_array(mas, n);
	system("pause");
    return 0;
}

int fill_array(double mas[],short n )
{
	int i = 0;
	for (; i < n; i++)
	{
		cout << "Vvedite zna4 #" << i + 1<<": ";
		cin >> mas[i];
	}
	return i;
}

void show_array(double mas[], short n)
{
	for (int i=0; i < n; i++)
	{
		cout << mas[i] << "\t" ;
	}
}
void reverse_array(double mas[], short n)
{
	int j = n - 1;
	for (int i=0  ; i < j; ++i,--j)
	{
		int t;
		t = mas[i];
		mas[i] = mas[j];
		mas[j] = t;
	}
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << "\t";
	}
}
// gl_7_samokontrl8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int replace(char *, char, char);

int main()
{
	char ch1, ch2;
	char str[]="blablabla";
	//cout << "Vvedite predlojenie: " << endl;
	//cin >> *str;
	cout << "Ch1: ";
	cin >> ch1;
	cout << "Ch2: ";
	cin >> ch2;
	cout << str << endl;
	int count = replace(str, ch1, ch2);
	cout << str << endl;
	cout << "Kol zamen=" << count << endl;
	system("pause");
	
    return 0;

}

int replace(char *str, char ch1, char ch2)
{
	int count = 0;
	while (*str)
	{
		if (*str == ch1)
		{

			*str = ch2;
			count++;
		}
		str++;
	}
	return count;
}


// gl_8_prakt4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cstring>
#include <iostream>

using namespace std;

struct stringy
{
	char *str;
	int ct;
};

void show(const stringy &, short n = 1);
void show(const char [], short n = 1);
void set(stringy &, char []);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't it use to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	system("pause");
    return 0;
}

void set(stringy &b, char s[])
{
	b.str = new char[strlen(s)+1];
	strcpy(b.str, s);
}
void show(const stringy &b, short n)
{
	if (n == 1)
		cout << b.str<<endl;
	else if (n < 1)
	{
		for (int i = 0; i < n; i++)
			cout << b.str << endl;
	}
}
void show(const char c[], short n)
{
	if (n == 1)
	{
		for (int i = 0; i<strlen(c); i++)
			cout << c[i];
		cout << endl;
	}
	else if (n < 1)
	{
		for (int i = 0; i < n; i++)
		{
			for(int j=0;j<strlen(c);j++)
				cout << c[j];
		}	cout << endl;
	}
}




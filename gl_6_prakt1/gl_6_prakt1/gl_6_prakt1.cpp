// gl_6_prakt1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char ch;
	cout << "Vvedite ch"<<endl;
	ch=cin.get();
	while (isalpha(ch) && ch != '@' )
	{
		if (isupper(ch))
		{
			ch=tolower(ch);
		}
		else if (islower(ch))
		{
			ch=toupper(ch);
		}
		cout << ch;
		ch = cin.get();
	}
	system("pause");
    return 0;
}


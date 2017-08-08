// gl_4_prakt3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char f_name[10];
	char l_name[10];
	cout << "Enter first name: ";
	cin >> f_name;
	cout << "enter last name: ";
	cin >> l_name;
	cout << "Information: " << l_name << ", " << f_name<<endl;
	system("pause");
    return 0;
}


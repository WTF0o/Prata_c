// gl_4_prakt.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string f_name, l_name;
	int age;
	char grade;
	cout << "What is your firs name: ";
	cin >> f_name;
	cout << "what is your last name: ";
	cin >> l_name;
	cout << "what is your age: ";
	cin >> age;
	cout << "what letter grade do you deserve: ";
	cin >> grade;
	grade = grade + 1;
	cout << "Name: " << l_name << "  " << f_name << endl;
	cout << "grade: " <<grade << endl;
	cout << "age: " << age << endl;
	system("pause");
    return 0;
}


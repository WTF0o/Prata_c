// gl_7_samokontrl12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
const int n = 3;
struct applicant
{
	char name[30];
	int credit_ratings[n];
};
void show(applicant ap);

int main()
{
	applicant ap = {"alex",10,13,16};

	show(ap);
	system("pause");
    return 0;
}


void show(applicant ap)
{
	for (int i = 0; i < n; i++)
		cout << ap.credit_ratings[i] << "\t";
	cout<<ap.name<< endl;
}

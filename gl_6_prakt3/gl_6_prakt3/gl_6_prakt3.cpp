// gl_6_prakt3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>;

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "������� ���� �� 4 ����: \n"
		"� \tB \n"
		"C \tD \n"<<endl;
	char ch;
	metka:
	cout << "������� ��������: ";
	cin >> ch;
	switch (ch)
	{
	case'A':cout << "�� ����� �";
		break;
	case'B':cout << "�� ����� B";
		break;
	case'C':cout << "�� ����� C";
		break;
	case'D':cout << "�� ����� D";
		break;
	default: goto metka;
		break;
	}
	system("pause");
    return 0;
}


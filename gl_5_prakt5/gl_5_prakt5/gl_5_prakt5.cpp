
// gl_5_prakt5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>;
#include <string>;

using namespace std;

int main()
{
	setlocale(0, "");
	string mesiac[] =
	{ "������",
	"�������",
	"����",
	"������",
	"���",
	"����",
	"����",
	"������",
	"��������",
	"�������",
	"������",
	"�������" };
	int mas[12] [3];
	int sum=0;
	for (int i = 0; i < 12; i++)
	{
		cout << "������� ����� ������ �� " << mesiac[i] << " :"<<endl;
		for (int j = 0; j < 3; j++)
		{
			cout << "������� �� " << j+1 << "���: ";
			cin >> mas[i][j];
			sum += mas[i][j];
		}
	}
	cout << "����� �� ��� ������: " << sum << endl;
	system("pause");
    return 0;
}


// gl_8_samokontl7.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template <typename AnyType>
int rofl(AnyType a, AnyType b)
{
	return a < b? b : a;
}

int main()
{
	int a, b;
	cout << "Vvedite a i b";
	cin >> a >> b;
	int result_of = rofl(a, b);
	cout << result_of << endl;
	system("pause");
    return 0;
}


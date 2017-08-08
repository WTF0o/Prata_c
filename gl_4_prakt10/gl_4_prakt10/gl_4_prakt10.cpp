// gl_4_prakt10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <array>

using namespace std;


int main()
{
	array<int, 4> arr;
	cout << "Vvedite arr[1]";
	cin >> arr[0];
	cout << "Vvedite arr[2]";
	cin >> arr[1];
	cout << "Vvedite arr[3]";
	cin >> arr[2];
	arr[3] = (arr[1] + arr[0]+arr[2]) / 3;
	cout << "srd: " << arr[3]<<endl;
	system("pause");
    return 0;
}


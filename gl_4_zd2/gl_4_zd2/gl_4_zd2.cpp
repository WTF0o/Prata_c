// gl_4_zd2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <array>
#include <iostream>
#include <vector>

using namespace std;
struct fish//zd8
{
	string vid;
	double ves;
	double dlinna;	
};

int main()
{
	char actor[30];
	short b[100];
	float c[20];
	long double d[64];//zd1
	std::array<int, 5> arr;//zd2
	int mas[5] = { 1,2,3,4,5 };//zd3
	int even = mas[0] + mas[4];//zd4
	float ideas[3] = { 1,2,3 };
	cout << ideas[1] << endl;//zd5
	char ch[13] = "cheeseburger";//zd6
	string st = "waldof";//zd7
	fish som = { "som",14.4,5 };//zd9
	//enum Response(Yes=1,No=0,Maybe=2);//zd10
	//Response ra;
	double ted = 10;
	double *t = &ted;
	cout << "adress ted: " << t << "  cout: " << *t << endl;//zd11
	float treacle[10] = { 1,2,3,4,5,6,7,8,9,10};//zd11
	float *treac = treacle;
	cout << treac[0] << "		" << treac[9];
	cout << "vvedite znach :" ;
	int cout;
	cin >> cout;
    double *d_mass = new double[cout];
	vector<int> vek(cout);
	fish * fs = new fish;
	cin >> (*fs).dlinna;
	//cout << "dlinna: " << fs->dlinna <<"\n";
	delete fs;
	system("pause");
	return 0;
}


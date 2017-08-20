// gl_8_prakt2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
struct CandyBar
{
	string name;
	double ves;
	int kol;
};

void vvod(CandyBar &Candy, char *n="munch", double v=2.85, int k=350);
void show(CandyBar &Candy);

int main()
{
	CandyBar candy;
	vvod(candy, "aCandy",1.05);
	show(candy);
	system("pause");
    return 0;
}


void vvod(CandyBar &Candy,char *n, double v , int k)
{
	Candy.name=*n;
	Candy.ves = v;
	Candy.kol=k;
}
void show(CandyBar &Candy) 
{
	cout << Candy.name << "\t" << Candy.ves << "\t" << Candy.kol << endl;

}
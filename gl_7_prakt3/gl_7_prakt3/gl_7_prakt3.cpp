// gl_7_prakt3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

struct  box
{
	char maker[40];
	float height;
	float width;
	float lenght;
	float volume;
};


void vvod(box *);
void show(box);

using namespace std;

int main()
{
	box person;
	vvod(&person);
	show(person);
	system("pause");
    return 0;
}

void vvod(box *person)
{
	cout << "Vvedite maker: ";
	cin >> person->maker;
	cout << "Vvedite height: ";
	cin >> person->height;
	cout << "Vvedite width: ";
	cin >> person->width;
	cout << "Vvedite lenght: ";
	cin >> person->lenght;
	person->volume = person->height * person->width * person->lenght;
	cout << "volume: "<<person->maker;
}

void show(box person)
{
	cout << person.maker << " " << person.height << " " <<
		person.lenght << " " << person.width << " " << person.volume << endl;
}
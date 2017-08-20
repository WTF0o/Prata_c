// gl_8_samokontrl4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct box
{
	char maker[40];
	float heidht;
	float widht;
	float lenght;
	float volume;
};

void show(box &);
void vvod(box &);

int main()
{
	box box_1;
	vvod(box_1);
	show(box_1);
	system("pause");
    return 0;
}

void show(box & box)
{
	cout << box.maker << "\t" << box.heidht << "\t" << box.lenght << "\t" << box.widht
		<< "\t" << box.volume;
}
void vvod(box & box)
{
	cout << "Vvedite maker";
	cin >> box.maker;
	cout << "Vvedite height";
	cin >> box.heidht;
	cout << "Vvedite widht";
	cin >> box.widht;
	cout << "Vvedite lenght";
	cin >> box.lenght;
	box.volume = box.lenght*box.widht*box.heidht;
}

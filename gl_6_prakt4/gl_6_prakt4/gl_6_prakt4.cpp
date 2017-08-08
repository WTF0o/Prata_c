// gl_6_prakt4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct bop
{
	string fullname;
	string title;
	string bopname;
	int preference;
};

int main()
{
	int i = 0;
	cout << "Vvedite kol sotryddnikov: ";
	short kol;
	cin >> kol;
	bop *person_bop=new bop[kol];
	for (i = 0; i < kol; i++)
	{
		cout << "Vvedite svedinia ob " << i + 1 << " rabotnike" << endl;
		cout << "Vvedite fullname: ";
		cin >> person_bop[i].fullname;
		cout << "Vvedite title: ";
		cin >> person_bop[i].title;
		cout << "Vvedite bopname: ";
		cin >> person_bop[i].bopname;
		cout << "Vvedite preference: ";
		cin >> person_bop[i].preference;
		cout << "__________________________" << endl;
	}
	cout << "a.display by name \t b.display by title\n"
		"c.display by bopname \t d.display by preference\n"
		"q.quit" << endl;
	char ch;
	cin >> ch;
	bool exet = false;
	while (exet!=true)
	{
		switch (ch)
		{
		case 'a':
			for (i = 0; i < kol; i++)
				cout << person_bop[i].fullname << endl;
			break;
		case 'b':
			for (i = 0; i < kol; i++)
			{
				cout << person_bop[i].title << endl;
			}
			break;
		case 'c':
			for (i = 0; i < kol; i++)
			{
				cout << person_bop[i].bopname << endl;
			}
			break;
		case 'd':
			for (i = 0; i < kol; i++)
			{
				switch (person_bop[i].preference)
				{
				case 0:
					cout << person_bop[i].fullname << endl;
					break;
				case 1:
					cout << person_bop[i].title << endl;
					break;
				case 2:
					cout << person_bop[i].bopname << endl;
					break;
				default:
					break;
				}
			}
			break;
		case 'q':
			exet = true;
			break;
		}
		if (exet==false)
		{
			cout << "Next choise: ";
			cin >> ch;
		}

	}
	system("pause");
    return 0;
	delete person_bop;
}


// RogueLike.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Creatures.cpp"
#include "windows.h"

using namespace std;

int isDead(Creature *c)
{
	return !c->Get_healthPoints();
}

int main()
{
	SetConsoleTitle(_T("RogueLike by ME"));
	setlocale(LC_ALL, "rus");
	int choice;
	char name[25];
	cout << "Выберите ваш класс(1 - Маг, 2 - Некромант): ";
	cin >> choice;
	cout << "Выберите имя вашего героя: ";
	cin >> name;
	switch (choice)
	{
	case 1:
	{
		Sorcerer *s = new Sorcerer(name);
		break;
	}

	case 2:
	{
		Necromancer *n = new Necromancer(name);
		break;
	}

	}
	/*Sorcerer *s = new Sorcerer("Dumbledore");
	printf("%d\n", s->Get_attackPoints());
	delete s;
	Necromancer *n = new Necromancer("Guldan");
	cout << n->Get_healthPoints() << endl;
	n->receiveDeath();
	cout << n->Get_healthPoints() << endl;
	n->receiveDeath();
	n->receiveDeath();
	n->Set_healthPoints(0);
	isDead(n) ? delete n : printf("NOT YET");
	try
	{
		n->Get_attackPoints();
	}
	catch (...)
	{
		cout << "ERROR\n";
	}*/
    return 0;
}
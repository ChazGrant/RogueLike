// RogueLike.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "Creatures.cpp"

using namespace std;

int main()
{
	Creature *s = new Sorcerer;

	cout << s->Get_experiencePoints() << endl;

    return 0;
}


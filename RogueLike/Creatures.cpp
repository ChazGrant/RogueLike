#include "stdafx.h"
#include "Creatures.h"

class Sorcerer :public Creature 
{
public:

	Sorcerer()
	{
		this->healthPoints = 150;
		this->attackPoints = 15;
		this->experiencePoints = 0;
	}

	void Set_healthPoints(int h) { this->healthPoints = h; }
	void Set_attackPoints(int a) { this->attackPoints = a; }
	void Set_experiencePoints(int xp) { this->experiencePoints = xp; }


	int Get_attackPoints() { return this->attackPoints; }
	int Get_healthPoints() { return this->healthPoints; }
	int Get_experiencePoints() { return this->experiencePoints; }
};
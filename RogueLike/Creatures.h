#pragma once
#include <iostream>
class Creature
{
protected:
	int attackPoints, healthPoints, experiencePoints;
	char name[20];
public:
	virtual void Set_attackPoints(int a) = 0;
	virtual void Set_healthPoints(int h) = 0;
	virtual void Set_experiencePoints(int h) = 0;
	virtual void receiveDeath() = 0;

	virtual void printInfo(char message[], int delay) = 0;

	virtual int Get_attackPoints() = 0;
	virtual int Get_healthPoints() = 0;
	virtual int Get_experiencePoints() = 0;
};


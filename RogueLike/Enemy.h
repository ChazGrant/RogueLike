#pragma once

class Enemy
{
protected:
	int attackPoints, healthPoints;
	char name[20];
public:
	virtual void Set_attackPoints(int a) = 0;
	virtual void Set_healthPoints(int h) = 0;

	virtual void Die() = 0;

	virtual void printInfo(char message[], int delay) = 0;

	virtual int Get_attackPoints() = 0;
	virtual int Get_healthPoints() = 0;
};

#pragma once
class Creature
{
protected:
	int attackPoints, healthPoints, experiencePoints;
public:
	virtual void Set_attackPoints(int a) = 0;
	virtual void Set_healthPoints(int h) = 0;
	virtual void Set_experiencePoints(int h) = 0;

	virtual int Get_attackPoints() = 0;
	virtual int Get_healthPoints() = 0;
	virtual int Get_experiencePoints() = 0;
};


#include "stdafx.h"
#include "Creatures.h"
#include "windows.h"
#include <iostream>

using namespace std;


class Sorcerer :public Creature 
{
public:

	Sorcerer(char name[])
	{
		this->healthPoints = 150;
		this->attackPoints = 15;
		this->experiencePoints = 0;
		strcpy(this->name, name);
		printf("%s был создан\n", this->name);
	}

	~Sorcerer()
	{
		
	}

	void receiveDeath()
	{
		this->healthPoints = 0;
	}

	void Set_healthPoints(int h) { this->healthPoints = h; }
	void Set_attackPoints(int a) { this->attackPoints = a; }
	void Set_experiencePoints(int xp) { this->experiencePoints = xp; }

	void printInfo(char message[], int delay = 100)
	{
		for (byte i = 0; i < strlen(message); ++i)
		{
			Sleep(delay);
			printf("%c", message[i]);
		}
	}

	int Get_attackPoints() { return this->attackPoints; }
	int Get_healthPoints() { return this->healthPoints; }
	int Get_experiencePoints() { return this->experiencePoints; }
};


class Necromancer :public Creature
{
private:
	int livesCount;
	void Set_livesCount(int lc) { this->livesCount = lc; }
public:

	Necromancer(char name[])
	{
		this->healthPoints = 100;
		this->attackPoints = 25;
		this->experiencePoints = 0;
		this->livesCount = 2;
		strcpy(this->name, name);
		printf("%s был создан\n", this->name);
	}

	~Necromancer()
	{
		
	}

	void receiveDeath()
	{
		if (!revive())
		{
			char deathSpeech[100];
			sprintf(deathSpeech, "Вы умерли!\nТело %s будет покоиться здесь вечно\n", this->name);
			printInfo(deathSpeech, 100);
			this->healthPoints = 0;
		}
		else Necromancer(this->name, true);
	}

	void Set_healthPoints(int h) { this->healthPoints = h; }
	void Set_attackPoints(int a) { this->attackPoints = a; }
	void Set_experiencePoints(int xp) { this->experiencePoints = xp; }

	bool revive(){
		if (this->livesCount)
		{
			char reviveSpeech[100];
			printf("%s был возрождён\n", this->name);
			sprintf(reviveSpeech, "Осталось жизней: %d\n", this->livesCount);
			//this->printInfo(reviveSpeech);
			printf(reviveSpeech);

			this->healthPoints /= 2;
			this->attackPoints /= 2;
			this->experiencePoints /= 2;
			this->livesCount -= 1;

			return true;
		}
		else return false;
	}

	void printInfo(char message[], int delay = 100)
	{
		for (byte i = 0; i < strlen(message); ++i)
		{
			Sleep(delay);
			printf("%c", message[i]);
		}
	}

	int Get_attackPoints() { return this->attackPoints; }
	int Get_healthPoints() { return this->healthPoints; }
	int Get_experiencePoints() { return this->experiencePoints; }
	int Get_livesCount() { return this->livesCount; }
};
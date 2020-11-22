#include "stdafx.h"
#include "Hero.h"
#include "windows.h"

using namespace std;


class Sorcerer :public Hero 
{
public:

	Sorcerer(char name[])
	{
		this->healthPoints = 150;
		this->attackPoints = 6;
		this->experiencePoints = 0;
		strcpy(this->name, name);
		printf("%s был создан\n", this->name);
	}

	~Sorcerer()
	{
		
	}

	void Die()
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


class Necromancer :public Hero
{
private:
	int livesCount;
public:

	Necromancer(char name[])
	{
		this->healthPoints = 100;
		this->attackPoints = 8;
		this->experiencePoints = 0;
		this->livesCount = 2;
		strcpy(this->name, name);
		printf("%s был создан\n", this->name);
	}

	~Necromancer()
	{
		
	}

	void Die()
	{
		if (!revive())
		{
			char deathSpeech[100];
			sprintf(deathSpeech, "Вы умерли!\nТело %s будет покоиться здесь вечно\n", this->name);
			printInfo(deathSpeech, 100);
			this->healthPoints = 0;
		}
	}

	void Set_healthPoints(int h) { this->healthPoints = h; }
	void Set_attackPoints(int a) { this->attackPoints = a; }
	void Set_experiencePoints(int xp) { this->experiencePoints = xp; }

	bool revive(){
		if (this->livesCount)
		{
			this->healthPoints /= 2;
			this->attackPoints /= 2;
			this->experiencePoints /= 2;
			this->livesCount -= 1;

			char reviveSpeech[100];
			printf("%s был возрождён\n", this->name);
			sprintf(reviveSpeech, "Осталось жизней: %d\n", this->livesCount);
			//this->printInfo(reviveSpeech);
			printf(reviveSpeech);

			return true;
		}
		return false;
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
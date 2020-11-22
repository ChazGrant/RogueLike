#include "stdafx.h"
#include "Enemy.h"
#include "windows.h"

class Zombie : public Enemy 
{

	Zombie()
	{
		this->healthPoints = 50;
		this->attackPoints = 3;
	}

	void printInfo(char message[], int delay)
	{
		for (byte i = 0; i < strlen(message); ++i)
		{
			Sleep(delay);
			printf("%c", message[i]);
		}
	}


};
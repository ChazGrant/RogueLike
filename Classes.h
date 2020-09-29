class Creature
{
protected:
	int attackPoints, healthPoints;
public:
	void SetAP(int a) = 0;
	void SetHP(int h) = 0;

	int GetAP() = 0;
	int GetHP() = 0;
}
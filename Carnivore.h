#pragma once
#include <string>
using namespace std;

class Carnivore
{
protected:
	string name;
	int power;
	bool alive;
public:
	Carnivore(int _power)
	{
		power = _power;
		alive = true;
	}
	virtual void Eat(Herbivore * obj) = 0;
	string GetName()
	{
		return name;
	}
	int GetPower()
	{
		return power;
	}
	bool GetAlive()
	{
		return alive;
	}
	virtual ~Carnivore() = 0 {};
};


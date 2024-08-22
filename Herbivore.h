#pragma once
#include <string>
using namespace std;

class Herbivore
{
protected:
	string name;
	int weight;
	bool alive;
public:
	Herbivore(int _weight)
	{
		weight = _weight;
		alive = true;
	}
	virtual void EatGrass() = 0;
	string GetName()
	{
		return name;
	}
	int GetWeight()
	{
		return weight;
	}
	bool GetAlive()
	{
		return alive;
	}
	void SetDead()
	{
		alive = false;
	}
	virtual ~Herbivore() = 0 {};
};


#pragma once
#include "Carnivore.h"
using namespace std;

class Wolf : public Carnivore
{
public:
	Wolf(int _power) : Carnivore(_power)
	{
		name = "Wolf";
	}
	virtual void Eat(Herbivore * obj)
	{
		if (alive == true && obj->GetAlive() == true)
		{
			if (power > obj->GetWeight())
			{
				power += 6;
				obj->SetDead();
			}
			else if (power < obj->GetWeight())
			{
				power -= 6;
				if (power < 0)
				{
					alive = false;
				}
			}
		}
	}
	virtual ~Wolf() {};
};

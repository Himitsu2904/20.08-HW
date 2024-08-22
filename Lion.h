#pragma once
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

class Lion: public Carnivore
{
public:
	Lion(int _power) : Carnivore(_power)
	{
		name = "Lion";
	}
	virtual void Eat(Herbivore * obj)
	{
		if (alive == true && obj->GetAlive() == true)
		{
			if (power > obj->GetWeight())
			{
				power += 10;
				obj->SetDead();
			}
			else if (power < obj->GetWeight())
			{
				power -= 10;
				if (power < 0)
				{
					alive = false;
				}
			}
		}
	}
	virtual ~Lion() {};
};


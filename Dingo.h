#pragma once
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

class Dingo : public Carnivore
{
public:
	Dingo(int _power) : Carnivore(_power)
	{
		name = "Dingo";
	}
	virtual void Eat(Herbivore* obj)
	{
		if (alive == true && obj->GetAlive() == true)
		{
			if (power > obj->GetWeight())
			{
				power += 3;
				obj->SetDead();
			}
			else if (power < obj->GetWeight())
			{
				power -= 3;
				if (power < 0)
				{
					alive = false;
				}
			}
		}
	}
	virtual ~Dingo() {};
};



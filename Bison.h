#pragma once
#include "Herbivore.h"
using namespace std;

class Bison : public Herbivore
{
public:
	Bison(int _weight) : Herbivore(_weight)
	{
		name = "Bison";
	}
	virtual void EatGrass()
	{
		if (alive == true)
		{
			weight += 10;
		}
	}
	virtual ~Bison() {};
};
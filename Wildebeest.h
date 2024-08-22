#pragma once
#include "Herbivore.h"
using namespace std;

class Wildebeest: public Herbivore
{
public:
	Wildebeest(int _weight) : Herbivore(_weight)
	{
		name = "Wildebeest";
	}
	void EatGrass()
	{
		if (alive == true)
		{
			weight += 2;
		}
	}
	virtual ~Wildebeest() {};
};
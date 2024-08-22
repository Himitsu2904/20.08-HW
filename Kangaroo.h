#pragma once
#include "Herbivore.h"
using namespace std;

class Kangaroo : public Herbivore
{
public:
	Kangaroo(int _weight) : Herbivore(_weight)
	{
		name = "Kangaroo";
	}
	virtual void EatGrass()
	{
		if (alive == true)
		{
			weight += 7;
		}
	}
	virtual ~Kangaroo() {};
};
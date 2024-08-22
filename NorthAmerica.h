#pragma once
#include "Continent.h"
using namespace std;

class NorthAmerica : public Continent
{
public:
	NorthAmerica()
	{
		name = "North America";
		area = 24710;
	}
	virtual ~NorthAmerica() {};
};

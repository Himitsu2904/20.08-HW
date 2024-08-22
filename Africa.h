#pragma once
#include "Continent.h"
using namespace std;

class Africa: public Continent
{
public:
	Africa()
	{
		name = "Africa";
		area = 30370;
	}
	virtual ~Africa() {};
};


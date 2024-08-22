#pragma once
#include "Continent.h"
using namespace std;

class Australia : public Continent
{
public:
	Australia()
	{
		name = "Australia";
		area = 7741;
	}
	virtual ~Australia() {};
};

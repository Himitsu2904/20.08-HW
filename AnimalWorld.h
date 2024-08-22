#pragma once
#include "Africa.h"
#include "NorthAmerica.h"
#include "Australia.h"
using namespace std;

class AnimalWorld
{
	Herbivore* herb1;
	Herbivore* herb2;
	Herbivore* herb3;

	Carnivore* carn1;
	Carnivore* carn2;
	Carnivore* carn3;

	Continent* cont1;
	Continent* cont2;
	Continent* cont3;
public:
	AnimalWorld();
	void Start();
	void MealsHarbivores();
	void NutritionCarnivores();
	~AnimalWorld();
};


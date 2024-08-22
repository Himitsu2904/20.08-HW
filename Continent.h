#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Wildebeest.h"
#include "Bison.h"
#include "Kangaroo.h"
#include "Lion.h"
#include "Wolf.h"
#include "Dingo.h"
using namespace std;

class Continent
{
protected:
	list<Herbivore *> grass;
	list<Carnivore *> meat;
	string name;
	int area;
	int n_herb;
	int n_carn;
public:
	Continent()
	{
		name = "Continent";
		area = 0;
	}
	void ShowInfo()
	{
		cout << "\t-----" << name << " Info-----" << endl;
		cout << "Area = " << area << "000 km^2" << endl;
		cout << "Herbivore list:\n";
		for (Herbivore* obj : grass)
		{
			if (obj->GetAlive() == true)
			{
				cout << "  > " << obj->GetName() << " (" << obj->GetWeight() << " kg)\n";
			}
		}
		cout << "Carnivore list:\n";
		for (Carnivore* obj : meat)
		{
			if (obj->GetAlive() == true)
			{
				cout << "  > " << obj->GetName() << " (" << obj->GetPower() << " kg)\n";
			}
		}
	}
	/*auto GetHerbivore()
	{
		Herbivore* ptr = grass.begin();
		return grass.begin();
	}*/
	void AddHerbivore(Herbivore* obj)
	{
		grass.push_back(obj);
	}
	void AddCarnivore(Carnivore* obj)
	{
		meat.push_back(obj);
	}
	void DeleteHerbivore()
	{
		grass.pop_front();
	}
	void DeleteCarnivore()
	{
		meat.pop_front();
	}
	virtual ~Continent() = 0 {};
};


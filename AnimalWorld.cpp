#include "AnimalWorld.h"

AnimalWorld::AnimalWorld()
{
	herb1 = new Wildebeest(27);
	herb2 = new Bison(68);
	herb3 = new Kangaroo(43);

	carn1 = new Lion(52);
	carn2 = new Wolf(32);
	carn3 = new Dingo(16);

	cont1 = new Africa();
	cont2 = new NorthAmerica();
	cont3 = new Australia();

	cont1->AddHerbivore(herb1);
	cont1->AddCarnivore(carn1);

	cont2->AddHerbivore(herb2);
	cont2->AddCarnivore(carn2);

	cont3->AddHerbivore(herb3);
	cont3->AddCarnivore(carn3);
}

void AnimalWorld::Start()
{
	cout << "\t-----WELCOME TO THE ANIMAL WORLD-----\n";
	int choice = 0;
	do
	{
		choice = 0;
		while (choice != 1 && choice != 2 && choice != 3 && choice != 4)
		{
			cout << "1. View info about animals\n2. Feed herbivores\n3. Feed carnivores\n4. Exit app\n";
			cout << "What would you like to do? ";
			cin >> choice;
		}
		switch (choice)
		{
		case 1:
			cont1->ShowInfo();
			cont2->ShowInfo();
			cont3->ShowInfo();
			cout << "------------------------------------------------------\n";
			break;
		case 2:
			MealsHarbivores();
			break;
		case 3:
			NutritionCarnivores();
			break;
		}
	} while (choice != 4);
	cout << "Thank you for using \"Animal World\"" << endl;
}

void AnimalWorld::MealsHarbivores()
{
	herb1->EatGrass();
	herb2->EatGrass();
	herb3->EatGrass();
}

void AnimalWorld::NutritionCarnivores()
{
	//carn1->Eat(cont1->GetCarnivore());
	carn1->Eat(herb1);
	if (herb1->GetAlive() == false)
	{
		cont1->DeleteHerbivore();
	}
	carn2->Eat(herb2);
	if (herb2->GetAlive() == false)
	{
		cont2->DeleteHerbivore();
	}
	carn3->Eat(herb3);
	if (herb3->GetAlive() == false)
	{
		cont3->DeleteHerbivore();
	}
}

AnimalWorld::~AnimalWorld()
{
	delete herb1, herb2, herb3, carn1, carn2, cont1, cont2, cont3;
}

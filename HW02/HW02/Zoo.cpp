#include "Zoo.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
#include "Animal.h"
#include <iostream>
using namespace std;

Zoo::Zoo()
{
	for (int i = 0; i < 10; i++)
	{
		animals[i] = nullptr;
	}
	index = 0;
}

void Zoo::addAnimal(Animal* animal)
{
	if (index > 9)	return;

	animals[index] = animal;

	index++;
}

void Zoo::performActions()
{
	for (int i = 0; i < 10; i++)
	{
		animals[i]->MakeSound();
	}
}

Zoo::~Zoo()
{
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
		animals[i] = nullptr;
		cout << "delete Zoo";
	}
}


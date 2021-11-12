#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main()
{
	const Animal* animal[100];

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		animal[i]->makeSound();
	}
	for (int i = 0; i < 100; i++)
	{
		delete animal[i];
	}
	system("leaks a.out");
}

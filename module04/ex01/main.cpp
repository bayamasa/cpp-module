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

	try
	{
		std::string hello = "hello";
		Dog* dog = new Dog();
		dog->setIdeas(hello);
		std::cout << dog->getIdeas(0) << std::endl;
		std::cout << dog->getIdeas(100) << std::endl;
		delete dog;

		std::string hola = "hola";
		Cat* cat = new Cat();
		cat->setIdeas(hola);
		std::cout << cat->getIdeas(0) << std::endl;
		std::cout << cat->getIdeas(100) << std::endl;
		Cat* cat2 = cat;
		std::cout << cat2->getIdeas(0) << std::endl;
		delete cat;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < 100; i++)
	{
		delete animal[i];
	}
	system("leaks a.out");
}

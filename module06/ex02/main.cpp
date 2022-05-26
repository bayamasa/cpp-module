#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>


Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void)
{
	identify(generate());
	identify(*generate());
}

Base * generate(void)
{
	srand(time(NULL));
	int seed = rand() % 3;
	if (seed == 0)
		return new A();
	else if (seed == 1)
		return new B();
	else
		return new C();
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	if (a != nullptr)
		std::cout << "This is A" << std::endl;
	B *b = dynamic_cast<B*>(p);
	if (b != nullptr)
		std::cout << "This is B" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if (c != nullptr)
		std::cout << "This is C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "This is A" << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "This is B" << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "This is C" << std::endl;
	}
	catch(const std::exception& e){}
}

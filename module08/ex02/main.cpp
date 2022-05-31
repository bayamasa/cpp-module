#include <stack>
#include <iostream>
#include "MutantStack.hpp"
#include <list>

void subjectTest()
{
		MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
}

int main()
{
	// subjectTest();
	MutantStack<int> m;
 	std::list<int> l;
	for (int i = 0; i < 20; i++)
	{
		m.push(i);
		l.push_back(i);
	}
	MutantStack<int>::iterator it = m.begin();
	std::list<int>::iterator it2 = l.begin();
	for (; it != m.end();)
	{
		std::cout << *it++ << " " << *it2++ << std::endl;
	}
	return 0;
}

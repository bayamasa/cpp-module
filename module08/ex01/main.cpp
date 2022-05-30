#include "Span.hpp"
#include <vector>
#include <iostream>


int main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(INT32_MAX);
	sp.addNumber(INT32_MIN);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	Span sp_2 = Span(2);
	int array[] = {2, 3};
	std::vector<int> v(array, array + 2);
	std::cout << "v.size(): " << v.size() << std::endl;
	std::cout << "v.at(0): " << v.at(0) << std::endl;
	std::cout << "v.at(1): " << v.at(1) << std::endl;
	sp_2.addNumbers(v);
	std::cout << sp_2.shortestSpan() << std::endl;
	std::cout << sp_2.longestSpan() << std::endl;
	system("leaks a.out");
}

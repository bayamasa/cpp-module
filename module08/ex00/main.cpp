#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
	int N = 10;
	std::vector<int> v(N);
	for (int i = 0; i < N; i++)
	{
		v.push_back(i);
	}
	int array[] = {1, 2, 3};
	const std::vector<int> v_const(array, array + 3);

	try
	{
		std::cout << "easyfind(v, 2): " << *easyfind(v, 2) << std::endl;
		std::cout << "easyfind(v, 20): " << *easyfind(v, 20) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "easyfind(v, 2): " << *easyfind(v_const, 2) << std::endl;
		std::cout << "easyfind(v, 20): " << *easyfind(v_const, 20) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}

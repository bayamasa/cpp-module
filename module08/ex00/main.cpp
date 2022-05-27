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
	
	try
	{
		std::cout << "easyfind(v, 2): " << easyfind(v, 20) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "kita" << std::endl;
		std::cerr << e.what() << '\n';
	}
	
	
}

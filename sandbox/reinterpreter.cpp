#include "iostream"

int main()
{
	int a = 2;
	std::cout << "a: " << a << std::endl;
	std::cout << "cast: " << reinterpret_cast<long *>(a) << std::endl;
	return 0;
}

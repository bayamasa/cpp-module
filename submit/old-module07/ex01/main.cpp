#include "iter.hpp"
#include <iostream>

template<typename T>
void print(T &str) {
	std::cout << str << std::endl;
}

int main() {
	size_t size = 4;
	int array[] = {1, 2, 3, 4};
	iter(array, size, print);
}

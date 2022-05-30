#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v;
	std::cout << "v.size(): " << v.size() << std::endl; // 0
	v.resize(5);
	std::cout << "v.size(): " << v.size() << std::endl; // 5
	for (int i = 0; i < 10; i++)
	{
		v.push_back(1);
	}
	// resizeで0 ~ 4は0埋めされている。
	// ↑のpushbackは4以降の部分である5 ~ 14に対して要素が入れられる
	std::cout << "v.at(2): " << v.at(2) << std::endl; // 0

	v.reserve(10);
	std::cout << "v.size(): " << v.size() << std::endl; // 15
	for (int i = 0; i < 10; i++)
	{
		v.push_back(1);
	}
	std::cout << "v.size(): " << v.size() << std::endl; // 25
	
	std::vector<int> a(10);
	std::cout << "a.at(3): " << a.at(3) << std::endl;
	std::cout << "a.size(): " << a.size() << std::endl;
	std::cout << "a.capacity(): " << a.capacity() << std::endl;
	a.reserve(10);
	std::cout << "a.capacity(): " << a.capacity() << std::endl;
	// std::cout << "a.size(): " << a.size() << std::endl; // 25
	// std::cout << "a.at(3): " << a.at(3) << std::endl;
	// std::cout << "a.at(6): " << a.at(6) << std::endl;
	for (int i = 0; i < 10; i++)
	{
		a.push_back(1);
	}
	// std::cout << "a.size(): " << a.size() << std::endl; // 15
	std::cout << "a[3]: " << a[3] << std::endl;
	// std::cout << "a.at(14): " << a.at(16) << std::endl;
}

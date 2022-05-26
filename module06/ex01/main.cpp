#include "Data.hpp"
#include <iostream>

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

int main(void)
{
	Data *data = new Data();
	data->setA(10);
	data->setS("hi");
	std::cout << "data->getA(): " << data->getA() << std::endl;
	std::cout << "data->getS(): " << data->getS() << std::endl;
	uintptr_t data_ptr = serialize(data);
	std::cout << "data_ptr: " << data_ptr << std::endl;
	Data *after = deserialize(data_ptr);
	std::cout << "after->getA(): " << after->getA() << std::endl;
	std::cout << "after->getS(): " << after->getS() << std::endl;
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

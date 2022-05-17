#include <iostream>

class Cat
{
private:
public:
	Cat(){}
	~Cat(){}
	Cat(const Cat &other)
	{
		std::cout << "cp kita" << std::endl;
	}
	Cat &operator=(const Cat &other);
	Cat getCat(Cat *hi){
		return *hi;
	}
};

int main() {
	Cat a;
	a.getCat(&a);
}

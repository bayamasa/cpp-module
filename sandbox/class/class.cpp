#include <string>
class Hi
{
private:
	std::string hi;
public:
	Hi(/* args */);
	~Hi();
};

Hi::Hi(/* args */)
{
}

Hi::~Hi()
{
}

class Hello
{
private:
	Hi hi;
public:
	Hello(/* args */);
	~Hello();
};

Hello::Hello(/* args */)
{
}

Hello::~Hello()
{
}


int main()
{
	Hello hello;
	return 0;
}

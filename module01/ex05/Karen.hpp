#include <string>
#include <iostream>

class Karen
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	typedef void (Karen::*action)(void);
public:
	Karen(/* args */);
	~Karen();
	void (* funcPtr)();

	void complain(std::string level);
};


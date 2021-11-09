#include <string>
#include <iostream>

class Karen
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	typedef void (Karen::*funct)(void);
	funct pfunc[3];
	typedef void (*funcPtr)(void);	// funcptr[3] = {
	// 	debug,
	// 	info,
	// 	warning,
	// 	error,
	// };
public:
	Karen(/* args */);
	~Karen();
	void (* funcPtr)();

	void complain(std::string level);
};


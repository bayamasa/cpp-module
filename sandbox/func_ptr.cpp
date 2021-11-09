#include <string>
#include <iostream>
#include <stdio.h>

class test
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	test(/* args */);
	~test();
	typedef void (test::*funct)(void);
	void exec(int level );
};

test::test(/* args */)
{
	// pfunc[0] = &test::debug;

}

test::~test()
{
}

void test::debug(void)
{
	std::cout << "[DEBUG]: I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void test::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void test::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void test::exec(int level)
{
	funct pfunc[] = { &test::debug, &test::info, &test::warning};
	(this->*pfunc[level])();
}

// 関数へのポインタを指し示す配列
// void (* const FuncPtrArray[])(void) = {
//     debug,
//     info,
//     warning,
// };

int main(void)
{
	enum level { debug, info, warn, error};
    level lv = info;
	test *ts = new test();
	ts->exec(lv);
}

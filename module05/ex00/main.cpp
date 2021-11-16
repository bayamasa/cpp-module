#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat b = Bureaucrat("abe", 2);
		std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
		b.decrementGrade();
		std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
		// 個々で例外が呼ばれる
		b.incrementGrade();
		std::cout << b << std::endl;


		Bureaucrat s = Bureaucrat("suga", 149);
		s.decrementGrade();
		std::cout << s << std::endl;
		s.decrementGrade();
		std::cout << s << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat s = Bureaucrat("suga", 149);
		s.decrementGrade();
		std::cout << s << std::endl;
		s.decrementGrade();
		std::cout << s << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

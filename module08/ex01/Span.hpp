#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <limits>

class Span
{
private:
	static const int default_size = 999;
	unsigned int n;
	std::vector<int> numbers;
public:
	Span();
	Span(unsigned int N);
	~Span();
	Span(const Span &other);
	Span &operator=(const Span &other);
	void addNumber(int number);
	void addNumbers(std::vector<int> nums);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
	class OverCapacityException : public std::exception {
	public:
		const char *what() const throw();
	};
	class NotEnoughSizeException : public std::exception {
	public:
		const char *what() const throw();
	};
};

#endif

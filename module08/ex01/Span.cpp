#include "Span.hpp"

Span::Span()
{
	n = default_size;
	numbers.reserve(n);
}

Span::Span(unsigned int N)
{
	n = N;
	numbers.reserve(n);
}

Span::~Span()
{
}

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		n = other.n;
		// deep copyのtestする
		numbers = other.numbers;
	}
	return *this;
}

void Span::addNumber(int number)
{
	if (numbers.size() >= numbers.capacity()) 
		throw OverCapacityException();
	numbers.push_back(number);
}

unsigned int Span::shortestSpan() const {
	if (numbers.size() == 0 || numbers.size() == 1)
		throw NotEnoughSizeException();
	std::vector<int> _tmp(numbers);
	std::sort(_tmp.begin(), _tmp.end());
	unsigned int min_span = std::numeric_limits<unsigned int>::max();
	for (std::vector<int>::iterator it = _tmp.begin() + 1, e = _tmp.end(); it != e; ++it) {
		unsigned _span = *(it) - *(it - 1);
  		if (min_span > _span)
		{
			min_span = _span;
		}
	}
	return min_span;
}

unsigned int Span::longestSpan() const {
	if (numbers.size() == 0 || numbers.size() == 1)
	{
		throw NotEnoughSizeException();
	}
	int max = *std::max_element(numbers.begin(), numbers.end());
	int min = *std::min_element(numbers.begin(), numbers.end());
	return max - min;
}

const char *Span::OverCapacityException::what() const throw()
{
	return "out of capacity";
}

const char *Span::NotEnoughSizeException::what() const throw()
{
	return "span size is not enough";
}

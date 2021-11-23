#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	T *elements;
	unsigned int size;
public:
	Array();
	Array(unsigned int i);
	~Array()
	{
		delete[] elements;
	}
	Array(const Array &other);
	Array &operator=(const Array &other);
	T &operator[](int i);
	class IndexOutOfBoundsException : public std::exception {
	public:
		const char *what() const throw();
	};

};

template <typename T> Array<T>::Array()
{
	elements = NULL;
	size = 0;
}

template <typename T> Array<T>::Array(unsigned int i)
{
	elements = new T[i];
	size = i;
}

template <typename T> Array<T>::Array(const Array &other)
{
	size = other.size;
	elements = new T[size];
	for (unsigned int i = 0; i < size; i++)
	{
		elements[i] = other.elements[i];
	}
}

template <typename T> Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] elements;
		size = other.size;
		elements = new T[size];
		for (unsigned int i = 0; i < size; i++)
		{
			elements[i] = other.elements[i];
		}
	}
	return (*this);
}

template <typename T> T &Array<T>::operator[](int i)
{
		if (i < 0) {
			throw IndexOutOfBoundsException(); 
		} else if (i >= (int)size) {
			throw IndexOutOfBoundsException();
		} else {	
			return elements[i];
		}
}

template <typename T> const char *Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return "Input array index is not allowed";
}

#endif


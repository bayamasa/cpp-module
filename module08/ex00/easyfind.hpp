#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <vector>

template <typename T> typename T::iterator easyfind(T& t, int i)
{
	typename T::iterator itr = std::find(t.begin(), t.end(), i);
	if (itr == t.end())
	{
		throw std::exception();
	}
	return itr;
}

template <typename T> typename T::const_iterator easyfind(const T& t, int i)
{
	typename T::const_iterator itr = std::find(t.begin(), t.end(), i);
	if (itr == t.end())
	{
		throw std::exception();
	}
	return itr;
}

#endif

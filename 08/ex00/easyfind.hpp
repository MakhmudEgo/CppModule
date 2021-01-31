//
// Created by Mahmud Jego on 1/31/21.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <iostream>

class NotFound : public std::exception {
public:
	const char *what() const throw() {
		return "Not found";
	}
};

template<typename T>
int easyfind(T& t, int i)
{
	typename T::iterator iter = std::find(t.begin(), t.end(), i);
	if (iter == t.end())
	{
		throw NotFound();
	}
	return (*iter);
}

#endif //EASYFIND_HPP

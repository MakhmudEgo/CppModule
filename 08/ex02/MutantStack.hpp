//
// Created by Mahmud Jego on 1/31/21.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<class T>
class MutantStack : public std::stack<T> {
public:
	MutantStack(): std::stack<T>()
	{}
	MutantStack(MutantStack<T> const &mutantStack) : std::stack<T>(mutantStack)
	{}
	MutantStack<T> &operator=(MutantStack<T> const &mutantStack)
	{
		std::stack<T>::operator=(mutantStack);
		return (*this);
	}
	virtual ~MutantStack()
	{}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
	const_iterator cbegin() const
	{
		return (this->c.cbegin());
	}
	const_iterator cend() const
	{
		return (this->c.cend());
	}
	reverse_iterator rbegin()
	{
		return (this->c.rbegin());
	}
	reverse_iterator rend()
	{
		return (this->c.rend());
	}
	const_reverse_iterator crbegin() const
	{
		return (this->c.crbegin());
	}
	const_reverse_iterator crend() const
	{
		return (this->c.crend());
	}

};

#endif //MUTANTSTACK_HPP

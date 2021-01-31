//
// Created by Mahmud Jego on 1/30/21.
//

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <iostream>

template<class T>
class Array {
public:
	Array() : _arr(nullptr), _length(0)
	{};
	Array(unsigned int length) : _length(length)
	{
		_arr = new T[length];
	}
	Array(const Array &array) : _arr(nullptr), _length(0)
	{
		operator=(array);
	}
	Array& operator=(const Array &t)
	{
		if (this != &t && t._length)
		{
			if (this->_length)
			{
				delete [] this->_arr;
			}
			this->_arr = new T[t._length];
			for (int i = 0; i < (int)t._length; ++i)
			{
				this->_arr[i] = t._arr[i];
			}
			this->_length = t._length;
		}
		return (*this);
	}

	virtual ~Array()
	{
		if (this->_length)
		{
			delete [] this->_arr;
		}
	}

	T& operator[](unsigned int index)
	{
		if (index >= this->_length)
		{
			throw BadIndex();
		}
		return (this->_arr[index]);
	}

	const T& operator[](unsigned int index) const
	{
		if (index >= this->_length)
		{
			throw BadIndex();
		}
		return (this->_arr[index]);
	}

	class BadIndex : public std::exception {
	public:
		const char *what() const throw()
		{
			return "bad index";
		}
	};

	unsigned int size() const
	{
		return (this->_length);
	}

private:
	T *_arr;
	unsigned int _length;
};

template<typename T>
unsigned int ft_put_endl(T& t, unsigned int len)
{
	unsigned int i = 0;

	for (; i < len; ++i)
	{
		std::cout << t[i] << ' ';
	}
	std::cout << std::endl;
	return (i);
}

#endif //ARRAY_TPP

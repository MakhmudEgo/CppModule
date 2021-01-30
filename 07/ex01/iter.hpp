//
// Created by Mahmud Jego on 1/30/21.
//

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template<typename T>
void iter(T *arr, int arrLenght, void(f)(T &))
{
	for (int i = 0; i < arrLenght; ++i)
	{
		f(arr[i]);
	}
}

template<typename T>
void ft_increment(T& helo)
{
	helo += 1;
}

template<typename T>
int ft_put(T& t, int len)
{
	int i = 0;

	for (; i < len; ++i)
	{
		std::cout << t[i] << ' ';
	}
	return (i);
}

template<typename T>
void ft_diff(T *t)
{
	std::cout << "before" << std::endl;
	ft_put(t, 5);
	iter(t, 5, ft_increment);
	std::cout << std::endl << "after" << std::endl;
	ft_put(t, 5);
	std::cout << std::endl << std::endl;
}

#endif //ITER_HPP

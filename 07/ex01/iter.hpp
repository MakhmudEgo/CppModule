//
// Created by Mahmud Jego on 1/30/21.
//

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template<typename T>
void iter(T *arr, int arrLength, void(f)(const T &))
{
	for (int i = 0; i < arrLength; ++i)
	{
		f(arr[i]);
	}
}

template<typename T>
void ft_put(const T& t)
{
	std::cout << t << ' ';
}

#endif //ITER_HPP

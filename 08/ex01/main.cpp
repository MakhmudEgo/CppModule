//
// Created by Mahmud Jego on 1/31/21.
//

#include "Span.hpp"
#include <algorithm>

void init(int &n) {
	static int i = 0;
	n = ++i;
}

int main()
{
	std::cout << "hello day 08 ex 01 :(" << std::endl;

	Span span(10001);
	try {
		std::cout << span.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << span.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	span.addNumber(5);
	span.addNumber(17);
	span.addNumber(9);
	span.addNumber(3);
	span.addNumber(11);
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
	span.addNumber(3);
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
	srand(time(nullptr));
	{
		std::vector<int> res(10001);
		std::for_each(res.begin(), res.end(), init);
		Span multi(res.begin(), res.end(), 10003);
	}
	{
		std::vector<int> res(10000);
		std::for_each(res.begin(), res.end(), init);
		Span multi(10002);
		multi.addNumber(res.begin(), res.end());

		return 13;
	}
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;

	return (0);
}


/*
int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}*/

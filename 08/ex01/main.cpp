//
// Created by Mahmud Jego on 1/31/21.
//

#include "Span.hpp"

int main()
{
	std::cout << "hello day 08 ex 01 :(" << std::endl;

	Span span(5);
	span.addNumber(1);
	span.addNumber(2);
	span.addNumber(30);
	span.addNumber(4);
	span.addNumber(5);
	std::cout << span.longestSpan() << std::endl;
}
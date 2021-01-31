//
// Created by Mahmud Jego on 1/31/21.
//

#include "Span.hpp"

Span::Span(unsigned int maxSpan) : _maxSpan(maxSpan)
{
}

Span::~Span() {

}

Span::Span(const Span &) {

}

Span &Span::operator=(const Span &) {
	return (*this);
}

void Span::addNumber(int i)
{
	if (this->_span.size() == this->_maxSpan)
	{
		throw SpanFull();
	}
	this->_span.push_back(i);
}

int Span::shortestSpan() const {

	return 0;
}

int Span::longestSpan() const {
	if (this->_span.size() < 2)
	{
		//
	}
	return (std::max_element(this->_span.begin(), this->_span.end())[0]
	- std::min_element(this->_span.begin(), this->_span.end())[0]);
}


const char *Span::SpanFull::what() const throw()
{
	return "Span Full";
}

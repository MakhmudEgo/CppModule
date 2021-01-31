//
// Created by Mahmud Jego on 1/31/21.
//

#include "Span.hpp"

Span::Span(unsigned int maxSizeSpan) : _maxSizeSpan(maxSizeSpan)
{
}

Span::~Span() {

}

Span::Span(const Span &span)
{
	operator=(span);
}

Span &Span::operator=(const Span &span)
{
	if (this != &span)
	{
		for (std::vector<int>::const_iterator iter = span._span.begin(); iter != span._span.end(); iter++)
		{
			this->_span.push_back(*iter);
		}
		this->_maxSizeSpan = span._maxSizeSpan;
	}
	return (*this);
}

void Span::addNumber(int i)
{
	if (this->_span.size() == this->_maxSizeSpan)
	{
		throw SpanFull();
	}
	this->_span.push_back(i);
}

int Span::shortestSpan() const
{
	int longestSpan = this->longestSpan();
	int res = longestSpan;
	std::vector<int>::const_iterator iterMin = std::min_element(this->_span.begin(), this->_span.end());
	for (std::vector<int>::const_iterator iterBegin = this->_span.begin(); iterBegin != this->_span.end() ; iterBegin++)
	{
		if (iterMin != iterBegin &&
		(*iterBegin - *iterMin) < longestSpan
		&& (*iterBegin - *iterMin) < res)
		{
			res = *iterBegin - *iterMin;
		}
	}
	return (res);
}

int Span::longestSpan() const {
	if (this->_span.size() < 2)
	{
		throw NotEnoughDataSpan();
	}
	return (*std::max_element(this->_span.begin(), this->_span.end())
	- *std::min_element(this->_span.begin(), this->_span.end()));
}


const char *Span::SpanFull::what() const throw()
{
	return "Span Full";
}

const char *Span::NotEnoughDataSpan::what() const throw()
{
	return "Not Enough Data In The Span";
}

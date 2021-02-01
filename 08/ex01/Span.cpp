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
	int minValue = *std::min_element(this->_span.begin(), this->_span.end());
	int maxValue = *std::max_element(this->_span.begin(), this->_span.end());
//	int index = 0;
	for (int i = 0; i < this->_span.size(); ++i)
	{
		if (this->_span[i] == minValue)
		{
			for (int j = 0; j < this->_span.size(); ++j)
			{
				if (i != j && this->_span[j] < longestSpan)
				{
					maxValue = this->_span[j];
				}
			}
			break ;
		}
	}
	return (maxValue - minValue);
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

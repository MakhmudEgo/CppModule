//
// Created by Mahmud Jego on 1/31/21.
//

#include "Span.hpp"

Span::Span(unsigned int maxSizeSpan) : _maxSizeSpan(maxSizeSpan) {
}

Span::~Span() {

}

Span::Span(const Span &span) {
	operator=(span);
}

Span &Span::operator=(const Span &span) {
	if (this != &span) {
		for (std::vector<int>::const_iterator iter = span._span.begin(); iter != span._span.end(); iter++) {
			this->_span.push_back(*iter);
		}
		this->_maxSizeSpan = span._maxSizeSpan;
	}
	return (*this);
}

void Span::addNumber(int i) {
	if (this->_span.size() == this->_maxSizeSpan) {
		throw SpanFull();
	}
	this->_span.push_back(i);
}

int Span::shortestSpan() const {
	int longestSpan = this->longestSpan();

	for (int i = 0; i < (int)this->_span.size(); ++i) {
		for (int j = 0; j < (int)this->_span.size(); ++j) {
			if (i != j && std::abs(this->_span[j] - this->_span[i]) < longestSpan) {
				longestSpan = std::abs(this->_span[j] - this->_span[i]);
				if (!longestSpan) {
					return (longestSpan);
				}
			}
		}
	}
	return (longestSpan);
}

int Span::longestSpan() const {
	if (this->_span.size() < 2) {
		throw NotEnoughDataSpan();
	}
	return (*std::max_element(this->_span.begin(), this->_span.end())
	- *std::min_element(this->_span.begin(), this->_span.end()));
}

Span::Span(std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end, size_t maxSizeSpan)
: _span(it_begin, it_end), _maxSizeSpan(maxSizeSpan){
	if (_span.size() > _maxSizeSpan) {
		throw SpanFull();
	}
}

void Span::addNumber(std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end) {
	this->_span.insert(_span.end(), it_begin, it_end);
	if (_span.size() > _maxSizeSpan) {
		throw SpanFull();
	}
}


const char *Span::SpanFull::what() const throw() {
	return "Span Full";
}

const char *Span::NotEnoughDataSpan::what() const throw() {
	return "Not Enough Data In The Span";
}

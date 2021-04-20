//
// Created by Mahmud Jego on 1/31/21.
//

#include "Span.hpp"

Span::Span(unsigned int maxSizeSpan) : _size(0), _maxSizeSpan(maxSizeSpan) {
}

Span::~Span() {

}

Span::Span(const Span &span) {
	operator=(span);
}

Span &Span::operator=(const Span &span) {
	if (this != &span) {
		std::copy(span.cbegin(), span.cend(), std::back_inserter(this->_span));
		this->_maxSizeSpan = span._maxSizeSpan;
	}
	return (*this);
}

void Span::addNumber(int i) {
	if (_size == this->_maxSizeSpan) {
		throw SpanFull();
	}
	_size++;
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
: _span(it_begin, it_end), _maxSizeSpan(maxSizeSpan) {
	if (_span.size() > _maxSizeSpan) {
		throw NotEnoughSpace();
	}
}

void Span::push(std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end) {
	if (_size == _maxSizeSpan) {
		throw SpanFull();
	}
	else if (it_end - it_begin > static_cast<int>(_maxSizeSpan - _size)) {
		throw NotEnoughSpace();
	}
	this->_span.insert(_span.end(), it_begin, it_end);
	_size += it_end - it_begin;
}

Span::const_iterator Span::cbegin() const {
	return this->_span.cbegin();
}

Span::const_iterator Span::cend() const {
	return this->_span.end();
}

std::ostream &operator<<(std::ostream &os, const Span &span) {
	std::vector<int>::const_iterator it_start = span.cbegin();
	std::vector<int>::const_iterator it_end = span.cend();

	bool isSpace = false;
	for (; it_start != it_end; ++it_start) {
		if (isSpace) {
			os << ' ';
		}
		isSpace = true;
		os << *it_start;
	}
	return os;
}

size_t Span::size() const {
	return _size;
}


const char *Span::SpanFull::what() const throw() {
	return "Span Full";
}

const char *Span::NotEnoughDataSpan::what() const throw() {
	return "Not Enough Data In The Span";
}

const char *Span::NotEnoughSpace::what() const throw() {
	return "Not Enough Space";
}

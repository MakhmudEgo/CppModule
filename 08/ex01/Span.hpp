//
// Created by Mahmud Jego on 1/31/21.
//

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span {
public:
	Span(unsigned int maxSizeSpan);
	Span(std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end, size_t maxSizeSpan);
	Span(const Span&);
	Span& operator=(const Span&);
	virtual ~Span();

	void addNumber(int);
	void push(std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end);
	int shortestSpan() const;
	int longestSpan() const;


	typedef std::vector<int>::const_iterator const_iterator;

	const_iterator cbegin() const;
	const_iterator cend() const;

	size_t size() const;

	class SpanFull : public std::exception {
	public:
		const char *what() const throw();
	};

	class NotEnoughDataSpan : public std::exception {
	public:
		const char *what() const throw();
	};

	class NotEnoughSpace : public std::exception {
	public:
		const char *what() const throw();
	};
private:
	std::vector<int> _span;
	size_t _size;
	size_t _maxSizeSpan;
};

std::ostream &operator<<(std::ostream &os, const Span &span);

#endif //SPAN_HPP

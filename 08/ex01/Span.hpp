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
	Span(const Span&);
	Span& operator=(const Span&);
	virtual ~Span();

	void addNumber(int);
	int shortestSpan() const;
	int longestSpan() const;

	class SpanFull : public std::exception {
	public:
		const char *what() const throw();
	};

	class NotEnoughDataSpan : public std::exception {
	public:
		const char *what() const throw();
	};
private:
	std::vector<int> _span;
	unsigned int _maxSizeSpan;
};

#endif //SPAN_HPP

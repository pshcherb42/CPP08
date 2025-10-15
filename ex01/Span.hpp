#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <stdexcept>
#include <iostream>

class Span {
	private:
		unsigned int N;
		std::vector<int> v;
	public:
		Span();
		Span(unsigned int num);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int num);
		int shortestSpan();
		int longestSpan();
};

#endif
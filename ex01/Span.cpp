#include "Span.hpp"

Span::Span() : N(0),  v() {}
Span::Span(unsigned int num) : N(num) , v(num) {}
Span::Span(const Span& other) : N(other.N), v(other.v) {}
Span& Span::operator=(const Span& other) {
	if (this != &other) {
		N = other.N;
		v = other.v;
	}
	return *this;
}
Span::~Span() {}

void Span::addNumber(int num) {
	if (v.size() >= N)
		throw std::out_of_range("Array is full");
	v.push_back(num);
}

int Span::shortestSpan() {
	if (v.size() == 0)
		throw std::out_of_range("Array is empty");
	if (v.size() == 1)
		throw std::out_of_range("Array has only on enumber");
	sort(v.begin(), v.end());
	int span = v.at(0) - v.at(1);
	return span;
}
int Span::longestSpan() {
	if (v.size() == 0)
		throw std::out_of_range("Array is empty");
	if (v.size() == 1)
		throw std::out_of_range("Array has only on enumber");
	sort(v.begin(), v.end());
	int span = v.at(0) - v.at(v.size());
	return span;
}
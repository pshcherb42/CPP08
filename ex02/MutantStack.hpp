#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>
#include <iterator>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{
	public:
		MutantStack() : std::stack<T, Container>() {}
		~MutantStack() {}

		typedef typename Container::iterator iterator;

		iterator begin() {
			return (this->c.begin());
		}

		iterator end() {
			return (this->c.end());
		}
};


#endif
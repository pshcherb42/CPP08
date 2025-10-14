#ifndef EASYFIND_HPP 
#define EASYFIND_HPP
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <iostream>
#include <iterator>

template<typename T>
typename T::iterator easyfind(T& param1, int param2) {
    // find first occurrence of param2 in param2
        // find out the size of param1
        // run through all the characters untill one is equal to param2
    // if no ocurrence found throw an exception 
    typename T::iterator it = find(param1.begin(), param1.end(), param2);
    if (it == param1.end())
        throw std::runtime_error("Not present");
    return it;
}


#endif
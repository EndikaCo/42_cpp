#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
//Make a template function called easyfind, templated on a type T, that takes a T and an int.
void easyfind(T &vect, int num)
{
    std::vector<int>::iterator it;

    //find the first occurrence of the second parameter in the first parameter.
    it = find(vect.begin(), vect.end(), num);

    if (it != vect.end())
        std::cout << *it  << " found in vector" << '\n';
    else
        std::cout << "Not found in vector\n";//If it can’t be found, handle the error using an error return value.
}

#endif


#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

//Write a function template iter that take 3 parameters and returns nothing.
// The first parameter is the address of an array,
// the second one is the length of the array and the
//third one is a function called for each element of the array.
template <typename T>
void Iter(T *addr, int len, void(*fun)(T &)){

    for (int i = 0; i < len; i++){
        fun(addr[i]);
        std::cout << addr[i] << std::endl;
    }
}

#endif

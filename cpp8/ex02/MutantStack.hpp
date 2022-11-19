//
// Created by Server on 17/11/2022.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
//Make a MutantStack class, that will be implemented in terms of a std::stack, and
//offer all of its member functions, only it will also offer an iterator.
template<typename T>
class MutantStack : public std::stack<T>{

public:
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack &);
    MutantStack &operator=(const MutantStack &);

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
};


#endif

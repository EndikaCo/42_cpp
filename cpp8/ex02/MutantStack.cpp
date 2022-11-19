
#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>(){
}
template<typename T>
MutantStack<T>::~MutantStack(){
    std::cout << "MutantStack Destructor called" << std::endl;
}
template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &mutant) : std::stack<T>(mutant){}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &mutant) {
    *this = mutant;
    return (*this);
}




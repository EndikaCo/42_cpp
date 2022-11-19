#include <iostream>
#include "MutantStack.hpp"
#include "MutantStack.cpp"

void extraTest(){
    std::cout << std::endl << "LIFO TEST EXTRA" << std::endl;
    MutantStack<int> m;
    m.push(1);
    std::cout << "top: " << m.top() << std::endl;
    m.push(20);
    std::cout << "size: " << m.size() << std::endl;
    m.pop();
    std::cout << "size after pop: " << m.size() << std::endl;
    MutantStack<int>::iterator it = m.end();
    std::cout << "end: " << *it << std::endl;
    if(m.empty() != 1)
        std::cout << "size after empty: " << m.size() << std::endl;
}

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    extraTest();
    return 0;
}


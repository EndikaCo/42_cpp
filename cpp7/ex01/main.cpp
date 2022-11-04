#include <iostream>
#include "Iter.hpp"

#include <cstring>

template <typename T>
void f(T &a)
{
    a += 10;
}

int main()
{
    int *n = new int[3];
    n[0] = 0;
    n[1] = 1;
    n[2] = 2;

    std::cout << "Before pointer function:" << std::endl;
    for (int i = 0; i < 3; i++){
        std::cout << n[i] << std::endl;
    }
    std::cout << "After pointer function:" << std::endl;
    Iter(n, 3, f);
    delete []n;

    char ch[] = { 'a','b','c','d'};
    std::cout << "Before pointer function:" << std::endl;
    for (int i = 0; i < 3; i++){
        std::cout << ch[i] << std::endl;
    }
    std::cout << "After pointer function:" << std::endl;
    Iter(ch, 3, f);

    return 0;
}

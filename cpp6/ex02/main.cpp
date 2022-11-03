#include <iostream>
#include <stdint.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <stdlib.h>
#include <time.h>

//randomly instanciates A, B or C and returns the instance as a Base pointer.
// Feel free to use anything you like for the randomness.
Base* generate(void) {
    srand(time(NULL));
    int num = rand() % 3;
    switch (num)
    {
        case 0:
            return (new A);
        case 1:
            return (new B);
        case 2:
            return (new C);
    }
    return NULL;
}

//Write a function that displays "A", "B" or "C" according to the real type of p.
void identify(Base* base)
{
    A* a = dynamic_cast<A*>(base);
    if (a != NULL)
        std::cout << "A" << std::endl;
    B* b = dynamic_cast<B*>(base);
    if (b != NULL)
        std::cout << "B" << std::endl;
    C* c = dynamic_cast<C*>(base);
    if (c != NULL)
        std::cout << "C" << std::endl;
}

//Write a function "void identify(Base& p);" You should never use a pointer inside
//this function. that displays "A", "B" or "C" according to the real type of p.
void identify(Base& base){
    try {
        A &a = dynamic_cast<A &>(base);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(std::exception &bc){
    }
    try {
        B &b = dynamic_cast<B &>(base);
        std::cout << "B" << std::endl;
        (void)b;
    }
    catch(std::exception &bc){
    }
    try {
        C &c = dynamic_cast<C &>(base);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch(std::exception &bc){
    }
}

int main()
{
    Base *unknownType = generate();
    identify(unknownType);
    identify(*unknownType);
    delete unknownType;
    return (0);
}


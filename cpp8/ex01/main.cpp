#include "Span.hpp"

int main()
{
    std::cout << "TEST 1" << std::endl;

    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    try{
        std::cout << "TEST 2" << std::endl;
        Span lst0(2);
        lst0.addNumber(2);
        lst0.shortestSpan();
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try{
        std::cout << "TEST 3" << std::endl;
        Span lst1(3);
        lst1.addNumber(2);
        lst1.addNumber(8);
        lst1.addNumber(12);
        std::cout << lst1.shortestSpan() << std::endl;
        std::cout << lst1.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "TEST 4" << std::endl;
    Span lst(10010);
    srand(time(NULL));
    try{
        for(int n = 0; n < 10010; n++)
            lst.addNumber(rand() % 10010);
        //std::cout << lst << std::endl << std::endl;
        std::cout << lst.shortestSpan() << std::endl;
        std::cout << lst.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}

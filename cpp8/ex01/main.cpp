#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

/*
int main(){
    Span lst(100);
    srand(time(NULL));

    try{
        for(int n = 0; n < 100; n++)
            lst.addNumber(rand() % 100);

        std::cout << lst << std::endl << std::endl;


        std::cout << lst.shortestSpan() << std::endl;
        std::cout << lst.longestSpan() << std::endl;

    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;

}*/
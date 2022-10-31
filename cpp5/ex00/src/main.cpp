#include "../inc/Bureaucrat.hpp"

int main() {
    std::cout << "TEST1"<< std::endl;
    Bureaucrat *b1;
    try
    {
        b1 = new Bureaucrat();
        std::cout << *b1 << std::endl;
        b1->gradeUp();
        b1->gradeDown();
        b1->gradeDown();
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    delete b1;

    std::cout << "TEST2"<< std::endl;
    Bureaucrat *b2;
    try
    {
        b2 = new Bureaucrat("manolo", 1);
        std::cout << *b2 << std::endl;
        b2->gradeUp();
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    delete b2;

    std::cout << "TEST3"<< std::endl;
    try
    {
        Bureaucrat( "manolo", 160);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

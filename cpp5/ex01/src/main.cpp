#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include <iostream>

int main() {
    std::cout << "TEST1"<< std::endl;


    Bureaucrat dog = Bureaucrat("dog Sanchez", 1);
    std::cout << dog << std::endl;

    Form cc = Form("constitution", 10, 1);
    std::cout << cc << std::endl;
    dog.signForm(cc);

    std::cout << "TEST2"<< std::endl;
    Bureaucrat superChain = Bureaucrat("Echenique", 11);
    std::cout << superChain << std::endl;
    superChain.signForm(cc);
}

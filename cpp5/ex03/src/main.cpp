#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/Intern.hpp"
#include <iostream>

int main() {
    std::cout << "TEST1" << std::endl;
    try
    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "TEST2" << std::endl;
    try
    {
        Intern bb;
        Form* hhh;
        hhh = bb.makeForm("romy requst", "Beer");
        delete hhh;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }


}


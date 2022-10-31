#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    std::cout << "TEST1"<< std::endl;

    ShrubberyCreationForm   form = ShrubberyCreationForm("Ruedas para todos");
    RobotomyRequestForm     form2 = RobotomyRequestForm("tarari");

    Bureaucrat superChain = Bureaucrat("Echenique", 11);
    std::cout << superChain << std::endl;
    superChain.signForm(form);

    form.execute(superChain);

    form2.execute(superChain);


}

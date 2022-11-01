#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    std::cout << "TEST1"<< std::endl;

    ShrubberyCreationForm   form = ShrubberyCreationForm("Hot wheels");
    RobotomyRequestForm     form2 = RobotomyRequestForm("carape");
    PresidentialPardonForm  form3 = PresidentialPardonForm("Indulto del prusesh");

    Bureaucrat superWheel = Bureaucrat("Echenique", 11);
    Bureaucrat almeida = Bureaucrat("Almeida", 1);

    superWheel.signForm(form);
    almeida.signForm(form2);
    almeida.signForm(form3);

    std::cout << std::endl << "EXECUTES " << std::endl;
    form.execute(superWheel);

    form2.execute(almeida);

    form3.execute(almeida);

    std::cout << std::endl << "DESTRUCTORS " << std::endl;

}

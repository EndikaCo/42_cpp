
#include "../inc/Intern.hpp"

Intern::Intern(){
    std::cout << "Intern Default constructor called" << std::endl;
}
Intern::~Intern(){
    std::cout << "Intern Destructor called" << std::endl;
}

Intern::Intern(Intern const &intern){
    std::cout << "Intern Copy constructor called" << std::endl;
    *this = intern;
}
Intern &  Intern::operator=(Intern const &intern){
    std::cout << "Intern = operator called" << std::endl;
    if (this != &intern)
        *this = intern;
    return (*this);
}

Form* Intern::makePresidentialPardonForm(std::string target ){

    return new PresidentialPardonForm(target);
}

Form* Intern::makeShrubberyCreationForm(std::string target){

    return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomyRequestForm(std::string target) {

    return new RobotomyRequestForm(target);
}

int compareForm(std::string &name)
{

    std::string formName[] = {"presidential pardon", "robotomy request", "shrubbery creation"};

    for (int i = 1; i < 3; ++i) {
        if(name.compare(formName[i]) == 0)
        {
            return (i + 1);
        }
    }
    return -1;
}

Form* Intern::makeForm(std::string name, std::string target)
{
    int position = compareForm(name);

    switch (position) {
        case 1:
            std::cout << "Intern creates " << name << " form." << std::endl;
            return  (this->*(&Intern::makePresidentialPardonForm))(target);
        case 2:
            std::cout << "Intern creates " << name << " form." << std::endl;
            return  (this->*(&Intern::makeRobotomyRequestForm))(target);
        case 3:
            std::cout << "Intern creates " << name << " form." << std::endl;
            return  (this->*(&Intern::makeShrubberyCreationForm))(target);
        default:
            throw Intern::FailMakeFormException();
            return (NULL);
    }
}

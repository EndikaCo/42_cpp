
#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class Intern {
private:

public:
    Intern();
    ~Intern();

    Intern(Intern const &intern);
    Intern &operator=(Intern const &intern);

    Form	*makeForm(std::string name, std::string target);

    Form* makePresidentialPardonForm(std::string target);
    Form* makeShrubberyCreationForm(std::string target);
    Form* makeRobotomyRequestForm(std::string target);

    class FailMakeFormException : public std::exception{
    public:
        virtual const char *what() const throw(){
            return "Inter no valid";
        }
    };
};

#endif

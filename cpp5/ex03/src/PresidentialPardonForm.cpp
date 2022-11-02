
#include "../inc/PresidentialPardonForm.hpp"
# include <stdlib.h>
# include <time.h>

PresidentialPardonForm::PresidentialPardonForm(): Form("notarget", 25, 5) {
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, 25, 5), target(target){
    std::cout << "PresidentialPardonForm parameter constructor called" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : Form(form){
    target = form.target;
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &form)
{
    target = form.target;
    std::cout << "PresidentialPardonForm = operator called" << std::endl;
    return (*this);
}

std::string PresidentialPardonForm::getTarget() const{
    return target;
}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const {

    std::cout << "PresidentialPardonForm execute called"<< std::endl;

    if (getIsSigned() == false){
        throw FormNotSignedException();
    }

    if (this->getGradeToExecute() < bureaucrat.getGrade()){
        throw GradeTooLowException();
    }

    std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl ;
}

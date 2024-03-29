//
// Created by prose on 31/10/2022.
//

#include "../inc/RobotomyRequestForm.hpp"
# include <stdlib.h>
# include <time.h>

RobotomyRequestForm::RobotomyRequestForm(): Form("notarget", 72, 45) {
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45), target(target){
    std::cout << "RobotomyRequestForm parameter constructor called" << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : Form(form){
    target = form.target;
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form)
{
    target = form.target;
    std::cout << "RobotomyRequestForm = operator called" << std::endl;
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const{
    return target;
}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const {

    std::cout << "RobotomyRequestForm execute called"<< std::endl;

    if (this->getGradeToExecute() < bureaucrat.getGrade()){
        throw GradeTooLowException();
    }

    if (getIsSigned() == false){
        throw FormNotSignedException();
    }

    std::cout << "Makes some drilling noises" << std::endl;
    srand(time(NULL));
    int num = rand() % 2;

    if (num == 1)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << target << " robotomized failure" << std::endl;
}

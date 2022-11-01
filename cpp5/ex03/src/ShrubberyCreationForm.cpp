
#include "../inc/ShrubberyCreationForm.hpp"
#include<iostream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("notarget", 145, 137) {
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, 145, 137), target(target){
    std::cout << "ShrubberyCreationForm parameter constructor called" << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : Form(form){
    target = form.target;
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
    target = form.target;
    std::cout << "ShrubberyCreationForm = operator called" << std::endl;
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const{
    return target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const {

    std::string fileName = target;
    std::cout << "ShrubberyCreationForm execute called" << std::endl;

    if (getIsSigned() == false){
        throw FormNotSignedException();
    }

    if (this->getGradeToExecute() < bureaucrat.getGrade()){
        throw GradeTooLowException();
    }

    std::ofstream(fileName.append("_shrubbery").c_str())
    <<"             " << std::endl
    <<"     #       " << std::endl
    <<"    ###      " << std::endl
    <<"   #o###     " << std::endl
    <<" #####o###   " << std::endl
    <<"#o#\\#|#/### " << std::endl
    <<" ###\\|/#o#  " << std::endl
    <<"  # }|{  #   " << std::endl
    <<"    }|{      " << std::endl
    <<"~~~~~~~~~~~~ " << std::endl
    << std::endl;
}


#include "../inc/Form.hpp"


Form::Form():
        name("noname"),
        gradeToSign(0),
        gradeToExecute(0)
{
    std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute):
    name(name),
    gradeToSign(gradeToSign),
    gradeToExecute(gradeToExecute)
{
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw GradeTooHighException();
    if (gradeToExecute > 150 || gradeToSign > 150)
        throw GradeTooLowException();
    std::cout << "Form Default constructor called" << std::endl;
}

Form::~Form(){
    std::cout << "Form Destructor called" << std::endl;
}

Form::Form(Form const & org){
    *this = org;
    return;
}

Form& Form::operator=(Form const &org){

    this->name = org.name;
    this->gradeToSign = org.gradeToSign;
    this->gradeToExecute = org.gradeToExecute;
    return *this;
}

std::string Form::getName() {
    return name;
}

int Form::getGradeToExecute() {
    return gradeToExecute;
}

int Form::getGradeToSign() {
    return gradeToSign;
}

bool Form::getIsSigned() {
    return isSigned;
}

void Form::signForm(const int &bureaucrat) {
    if (bureaucrat.getGrade() > 150)
    {
        throw Form::GradeTooLowException();
    }
    this->isSigned = true;
}

std::ostream &operator<<(std::ostream &out, Form const &form) {
    out << form.getName() << ", bureaucrat grade to sign: " << form.getGradeToSign() << " bureaucrat grade to Execute: " << form.getGradeToExecute();
    return out;
}
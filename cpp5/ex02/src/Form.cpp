
#include "../inc/Form.hpp"

Form::Form():
        name("noname"),
        gradeToSign(150),
        gradeToExecute(150)
{
    isSigned = false;
    std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute):
    name(name),
    gradeToSign(gradeToSign),
    gradeToExecute(gradeToExecute)
{
    isSigned = false;
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw GradeTooHighException();
    if (gradeToExecute > 150 || gradeToSign > 150)
        throw GradeTooLowException();
    std::cout << "Form Default constructor called" << std::endl;
}

Form::~Form(){
    std::cout << "Form Destructor called" << std::endl;
}

Form::Form(Form const & org):
    name(org.name),
    gradeToSign(org.gradeToSign),
    gradeToExecute(org.gradeToExecute)
    {
    std::cout << "Form copy constructor called." << std::endl;
    }

Form& Form::operator=(Form const &org){
    std::cout << org.getName() << "Copy constructor called." << std::endl;
    return *this;
}

std::string Form::getName() const {
    return name;
}

int Form::getGradeToExecute() const {
    return gradeToExecute;
}

int Form::getGradeToSign() const {
    return gradeToSign;
}

bool Form::getIsSigned() const {
    return isSigned;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > gradeToSign)
    {
        throw Form::GradeTooLowException();
    }
    this->isSigned = true;
}

std::ostream &operator<<(std::ostream &out, Form const &form) {
    out << form.getName() << ", bureaucrat grade to sign: " << form.getGradeToSign() << " bureaucrat grade to Execute: " << form.getGradeToExecute();
    return out;
}

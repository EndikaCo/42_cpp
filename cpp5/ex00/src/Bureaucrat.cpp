
#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("noname"), grade(150)
{
    std::cout << "Bureaucrat default constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade)
{
    if(grade > 150)
        throw GradeToLowException();
    else if (grade < 1)
        throw GradeToHighException();
    std::cout << "Bureaucrat parameter constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &orig)
{
    *this = orig;
    std::cout << "Bureaucrat copy constructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &org){
    this->grade = org.grade;
    return *this;
}


std::string Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::gradeDown() {
    if (grade + 1 > 150)
        throw Bureaucrat::GradeToLowException();
    else
    {
        grade += 1;
        std::cout << name << " grade increased +1, grade is now " << grade << std::endl;
    }
}

void Bureaucrat::gradeUp() {
    if 	(grade - 1 < 1)
        throw Bureaucrat::GradeToHighException();
    else
    {
        grade -= 1;
        std::cout << name << " grade decreased -1, grade is now " << grade << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &org) {
    out << org.getName() << ", bureaucrat grade " << org.getGrade();
    return out;
}

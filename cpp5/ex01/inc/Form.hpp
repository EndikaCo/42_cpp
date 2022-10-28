
#ifndef FORM_HPP
#define FORM_HPP
#include<iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form {

private:
    const std::string     name;
    bool                isSigned;
    const int           gradeToSign;
    const int           gradeToExecute;

public:
    Form();
    Form(std::string name, int gradeToSign, int gradeToExecute);
    ~Form();
    Form(Form const & org);
    Form &operator=(Form const &org);
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void signForm(Bureaucrat const & bureaucrat);

    class GradeTooHighException : public std::exception{
        public:
            virtual const char *what() const throw(){
                return "The grade is too high.";
            }
    };

    class GradeTooLowException : public std::exception{
        public:
            virtual const char *what() const throw(){
                return "The grade is too low.";
            }
    };

};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif

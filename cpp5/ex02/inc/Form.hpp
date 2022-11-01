
#ifndef FORM_HPP
#define FORM_HPP


#include<iostream>
#include <fstream>
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
    virtual ~Form();

    Form(Form const & org);
    Form &operator=(Form const &org);

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(Bureaucrat const & bureaucrat);
    virtual void execute(Bureaucrat const &executor) const = 0;

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

    class FormNotSignedException : public std::exception{
        public:
            virtual const char *what() const throw(){
                return "The form is not signed";
            }
    };

};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif


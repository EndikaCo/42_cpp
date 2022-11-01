
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        private:
            std::string const   name;
            int                 grade;
    public:
        Bureaucrat();//default
        ~Bureaucrat();//Destructor
        Bureaucrat(std::string name, int grade);//parameter constructor
        Bureaucrat(Bureaucrat const &org);//copy
        Bureaucrat &operator=(Bureaucrat const &org);//= operator

        std::string getName()const;
        int getGrade()const;

        void gradeUp();
        void gradeDown();

        void signForm(Form &form);

        class GradeToLowException: public std::exception{
        public:
            virtual const char *what() const throw(){
                return "Grade can't be bigger than 150";
            }
        };

        class GradeToHighException: public std::exception{
        public:
            virtual const char *what() const throw(){
                return "Grade can't be lower than 1";
            }
        };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &org);

#endif


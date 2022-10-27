
#ifndef FORM_HPP
#define FORM_HPP

class Form {

private:
    std::string     name;
    bool            isSigned;
    const int       gradeToSign;
    const int       gradeToExecute;

public:
    Form();
    Form(std::string name, int gradeToSign, int gradeToExecute);
    ~Form();
    Form(Form const & org);
    Form &operator=(Form const &org);
    std::string getName();
    bool getIsSigned();
    int getGradeToSign();
    int getGradeToExecute();

    void signForm(Bureaucrat const & bureaucrat);

    class GradeTooHighException : public std::exception{
    public:
        GradeTooHighException();
        virtual const char *what() const throw();
        return ("The grade is too high.");
    };
    class GradeTooLowException : public std::exception{
        GradeTooLowException();
        virtual const char *what() const throw();
        return ("The grade is too low.");
    };

};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif

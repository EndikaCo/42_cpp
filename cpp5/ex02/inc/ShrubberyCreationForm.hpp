#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"


class ShrubberyCreationForm : public Form
{
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm(ShrubberyCreationForm const &form);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &form);//= operator

    void execute(Bureaucrat const &executor) const;
};

#endif

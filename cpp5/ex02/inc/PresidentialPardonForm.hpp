//
// Created by prose on 31/10/2022.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm :public Form
{
private:
    std::string  target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm(PresidentialPardonForm const &form);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &form);//= operator

    void execute(Bureaucrat const &executor) const;
    std::string getTarget() const;
};

#endif

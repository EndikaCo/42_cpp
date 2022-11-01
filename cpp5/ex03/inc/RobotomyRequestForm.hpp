//
// Created by prose on 31/10/2022.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm  : public Form
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm(RobotomyRequestForm const &form);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &form);//= operator

    void execute(Bureaucrat const &executor) const;
    std::string getTarget()const;
};


#endif

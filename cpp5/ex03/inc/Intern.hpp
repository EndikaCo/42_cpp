
#ifndef INTERN_HPP
#define INTERN_HPP


class Intern {
public:
    Intern();
    ~Intern();

    Intern(Intern const &intern);
    Intern &operator=(Intern const &intern);

    Form	*makeForm(std::string name, std::string target);
};


#endif

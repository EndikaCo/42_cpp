
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"


class Cure : public AMateria
{
    public:
        Cure();
        Cure(std::string type);
        ~Cure();
        Cure* clone() const;
        void use(ICharacter&);
};  

Cure::Cure() : AMateria()
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string type) : AMateria(type)
{
    std::cout << "Cure parameter constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

Cure* Cure::clone() const
{
    std::cout << "Cure clone method called" << std::endl;
    Cure *temp = new Cure(*this);
    return (temp);
}

void Cure::use(ICharacter& character)
{
   std::cout << "* heals " << character.getName() << "'s wounds *" << std::endl;
}

#endif

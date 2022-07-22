/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:17:03 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/22 10:26:40 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER.HPP
#define CHARACTER.HPP

#include "ICharacter.hpp"


class Character : public ICharacter
{
    protected:
        std::string name;
        AMateria *materia[4];  
        int     idx;
        
    public:
        Character();
        Character(std::string name);
        virtual ~Character();
        std::string const & getName();
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        
};

Character::Character()
{
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
    std::cout << "Character default constructor called" << std::endl;    
}

Character::Character(std::string name) : name(name)
{
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
    std::cout << "Character parameter constructor called" << std::endl;    
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;    
}

const std::string &Character::getName()
{
   return (name);
}

void Character::equip(AMateria* m)
{
    if(idx == 3)
    {
        std::cout << "inventory full" << std::endl;
    }
    else
    {
        materia[idx] = m;
        idx++;
    }    
}

void Character::unequip(int idx)
{
    if(materia[idx] != NULL)
        materia[idx] = NULL;
    else
    std::cout << "unable to unequip" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
        
}


#endif
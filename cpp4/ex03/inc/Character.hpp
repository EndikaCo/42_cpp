/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:17:03 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/28 11:49:30 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    protected:
        std::string name;
        AMateria *materia[4];  
        
    public:
        Character();
        Character(std::string name);
        virtual ~Character();
        virtual std::string const & getName();
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
        
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

const std::string& Character::getName()
{
   return (name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if( materia[i] == NULL)
        {
            materia[i] =  m;
            std::cout << m->getType() << " equiped in slot " << i  << std::endl;
            return;
        }
    }
        std::cout << "sorry, maximum materia equiped"  << std::endl; 
}

void Character::unequip(int idx)
{
    if(materia[idx] != NULL)
    {
        std::cout <<  materia[idx]->getType() << "unequiped from slot " << idx << std::endl;     
        materia[idx] = NULL;
    }
    else
        std::cout << "unable to unequip" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if (materia[idx] != NULL)
        (*materia[idx]).use(target);
    else
        std::cout << target.getName() <<" could't use" << materia[idx]->getType() << std::endl;    
}

#endif
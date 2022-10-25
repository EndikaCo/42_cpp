/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:17:03 by ecorreia          #+#    #+#             */
/*   Updated: 2022/08/01 11:17:02 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Character.hpp"

//Character default constructor
Character::Character()
{
    name = "Default";
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
    std::cout << "Character default constructor called" << std::endl;    
}

//Character parameter constructor
Character::Character(std::string name) : name(name)
{
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
    std::cout << "Character parameter constructor called" << std::endl;    
}

//Character destructor
Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
}

//Copy constructor
Character::Character(Character const &org)
{
    std::cout << "Character copy constructor called" << std::endl;
    *this = org;
}

//DEEP COPY
Character &Character::operator=(const Character &nc){
	if (this != &nc)
    {
        this->name = nc.name;

        for (int i = 0; i < 4; i++)
            materia[i] = nc.materia[i]->clone();
   
    }
    std::cout << "Character Assigment operator called" << std::endl; 
    return (*this);
}
 
const std::string& Character::getName() const
{
    //std::cout << "Character getter called" << std::endl;
    return (name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if( materia[i] == NULL)
        {
            materia[i] =  m->clone();
            std::cout << m->getType() << " equiped in slot " << i  << std::endl;
            return;
        }
    }
        std::cout << "sorry, max materia equiped"  << std::endl; 
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

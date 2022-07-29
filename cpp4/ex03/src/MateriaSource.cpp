/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:18:39 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/29 12:32:40 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

        
MateriaSource::MateriaSource() : id(0)
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        learned_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src) {
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = src;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    delete[] learned_materia;
}

void MateriaSource::learnMateria(AMateria* materia)
{  
    for (int i = 0; i < 4; i++)
    {
        if( learned_materia[i] == NULL)
        {
            learned_materia[i] =  materia;
            std::cout << materia->getType() << " learned in slot " << i  << std::endl;
            return;
        }
    }
        delete materia;
        std::cout << "maximum materia learned"  << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (!type.compare(learned_materia[i]->getType()))
        {   
            std::cout << "Materia created in MateriaSource"  << std::endl;
            return (learned_materia[i]->clone());
        }
    }
    std::cout << "You need to learned this materia first"  << std::endl;
    return NULL;
}

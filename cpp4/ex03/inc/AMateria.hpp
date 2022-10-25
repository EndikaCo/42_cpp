/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:38:16 by ecorreia          #+#    #+#             */
/*   Updated: 2022/08/01 11:06:24 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);    //parameter construcotr
        AMateria(AMateria const & orig);       //copy constructor
        virtual ~AMateria();
        std::string const & getType() const;    //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        AMateria &operator=(const AMateria& orig);
};

#endif
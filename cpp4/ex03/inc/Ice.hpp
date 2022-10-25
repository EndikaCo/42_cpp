/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:04:15 by ecorreia          #+#    #+#             */
/*   Updated: 2022/08/01 11:08:23 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
    public:
        Ice();
        virtual ~Ice();
        void use(ICharacter& character);
        Ice* clone() const;
        Ice(Ice const &r);//copy
        Ice	&operator=(Ice const &r);// = operator
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:16:35 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/12 10:51:23 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
    std::string type;

    public:
        Animal();
        virtual ~Animal();
        Animal(Animal const &orig);
        std::string getType(void) const ;
        virtual void makeSound(void) const = 0; // pure virtual (makes Animal Abstract)
};

#endif
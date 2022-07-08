/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:58:41 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/08 13:14:49 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;    
    public:
        Dog (/* args */);
        ~Dog ();
        void makeSound(void) const;
        Dog(Dog const &orig);
        Dog& operator=(Dog const &orig);
};

#endif

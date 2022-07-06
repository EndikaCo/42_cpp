/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:58:41 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/06 10:50:24 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include "../inc/Animal.hpp"

class Dog : public Animal
{
    public:
        Dog (/* args */);
        ~Dog ();
        void makeSound(void) const;
};



#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:58:41 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/12 09:39:50 by ecorreia         ###   ########.fr       */
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
        Dog ();
        virtual ~Dog ();
        virtual void makeSound(void) const;
        Dog(Dog const &orig);
        Dog& operator=(Dog const &orig);
        std::string b_getIdeas(int n);
        void b_setIdea(std::string idea);
};

#endif

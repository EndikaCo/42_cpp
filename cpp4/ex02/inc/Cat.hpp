/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:57:10 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/12 09:39:40 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain; 
    public:
        Cat();
        virtual ~Cat();
        virtual void makeSound(void) const;
        Cat(Cat const &orig);
        Cat& operator=(Cat const &orig);
        std::string b_getIdeas(int n);
        void b_setIdea(std::string idea);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:41:50 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/06 11:53:02 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
    std::string type;

    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(WrongAnimal const &orig);
        std::string getType(void) const ;
        void makeSound(void) const;
};

#endif


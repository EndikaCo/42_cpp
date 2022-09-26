/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:57:10 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/06 11:57:50 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define  WRONGCAT_HPP

#include "../inc/WrongAnimal.hpp"

class  WrongCat : public WrongAnimal
{
    public:
         WrongCat();
        ~WrongCat();
        void makeSound(void) const;
};

#endif
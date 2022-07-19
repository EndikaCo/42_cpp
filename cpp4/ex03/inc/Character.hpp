/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:17:03 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/19 14:21:14 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER.HPP
#define CHARACTER.HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
    Character();
    Character(std::string name);
    ~Character();
};

Character::Character(/* args */)
{
}

Character::Character(std::string name) : name(name)
{
}

Character::~Character()
{
}


#endif
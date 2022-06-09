/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:55:15 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/09 13:12:05 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

std::string & Weapon::getType()
{
    return type;
}

void  Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon(std::string type)
{
    setType(type);
}

Weapon::~Weapon()
{
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:55:07 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/01 11:26:38 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
   std::cout << "Destroyed"  << std::endl;
}

void HumanA::attack()
{
   std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
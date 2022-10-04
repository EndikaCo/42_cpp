/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:14:42 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/01 12:14:43 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

//default constructor
Zombie::Zombie()
{
}

//name setter
void Zombie::setname(std::string name)
{
    this->name = name;
}

//destructor
Zombie::~Zombie()
{
    std::cout << this->name << " Destroyed\n"; 
}

void Zombie::announce(void)
{
    std::cout << name << " BraiiiiiiinnnzzzZ...\n";
}

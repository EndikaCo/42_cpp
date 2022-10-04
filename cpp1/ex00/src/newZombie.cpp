/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:44:30 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/01 10:59:36 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

//in HEAP -> function that will create a Zombie, name it, and return it to be used somewhere else in your code.
Zombie* newZombie(std::string name)
{
    Zombie *zombie = new Zombie();
    zombie->setname(name);
    return zombie; 
}

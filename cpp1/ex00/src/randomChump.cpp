/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:23:53 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/01 10:46:49 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
//You have to write a function that will create a Zombie, and make it announce itself.
void randomChump(std::string name )
{
    Zombie *zombie = newZombie(name);
    zombie->announce();
    delete zombie;
}
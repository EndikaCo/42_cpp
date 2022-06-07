/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:44:30 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/07 11:41:07 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"


Zombie* newZombie(std::string name)
{
    Zombie *zombie = new Zombie();
    zombie->putname(name);
    return zombie; 
}
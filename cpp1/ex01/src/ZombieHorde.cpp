/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:19:54 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/07 14:44:57 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include <string>

Zombie* zombieHorde( int N, std::string name)
{
    Zombie *zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombie->putname(name); 
        zombie->announce();
    }
    return zombie;
}
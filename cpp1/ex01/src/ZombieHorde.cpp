/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:19:54 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/01 11:04:36 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include <string>

/**
 * @brief Write a function that takes an integer N. When called, it allocates N Zombie objects
 * 
 * @param N number of objects to allocate
 * @param name name of the zombies
 * @return Zombie*  the pointer to the first Zombie.
 */
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

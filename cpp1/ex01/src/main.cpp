/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:56:43 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/08 11:49:56 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include <stdio.h>

int main()
{
    std::string name;
    Zombie *zombie;
    int N = 4;
    
    std::cout << "Name of the zombies:\n";
    std::getline(std::cin, name);
    zombie = zombieHorde(N, name);
    
    delete []zombie;
    return 0;
}

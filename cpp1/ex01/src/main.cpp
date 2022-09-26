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

int main()
{
    std::string name;
    std::string N;
    Zombie *zombie;
    
    std::cout << "Type the number of zombies:\n";
    std::getline(std::cin, N);

    std::cout << "Name of the zombies:\n";
    std::getline(std::cin, name);
    zombie = zombieHorde(std::stoi(N), name);
    
    delete []zombie;
    return 0;
}
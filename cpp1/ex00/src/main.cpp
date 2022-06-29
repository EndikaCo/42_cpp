/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:56:43 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/29 20:36:33 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main()
{
    std::string name;
    Zombie *zombie;
    
    std::cout << "Type the name of the zombie:\n";
    std::getline(std::cin, name);
    zombie = newZombie(name);
    randomChump("aurelio");
    
    delete zombie;
    return 0;
}
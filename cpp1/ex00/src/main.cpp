/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:56:43 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/07 11:41:49 by ecorreia         ###   ########.fr       */
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
    delete zombie;
    return 0;
}
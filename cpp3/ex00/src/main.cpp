/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:03:35 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/23 17:55:20 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main()
{
    ClapTrap clap1("Aurelio");
    ClapTrap clap2("Zaturnino");

    clap1.attack(clap2.getName());
    clap2.takeDamage(clap1.getHitPoints());
    clap2.beRepaired(5);
    clap2.takeDamage(5);
    clap2.takeDamage(5);
}

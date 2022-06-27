/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:03:35 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/27 14:30:24 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main()
{
    ClapTrap clap1("Aurelio");
    ClapTrap clap2("Zaturnino");

    ScavTrap scav1("Emanuel");
    ScavTrap scav2("Wilson");
    
    clap1.attack(clap2.getName());
    clap2.takeDamage(clap1.getHitPoints());
    clap2.beRepaired(5);
    clap2.takeDamage(5);
    clap2.takeDamage(5);

    scav1.attack(scav2.getName());
    scav2.takeDamage(scav1.getHitPoints());
    scav2.guardGate();


}
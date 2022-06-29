/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:03:35 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/28 10:37:23 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main()
{
    ClapTrap clap1("Aurelio");
    ClapTrap clap2("Zaturnino");

    ScavTrap scav1("Emanuel");
    ScavTrap scav2("Wilson");

    FragTrap frag1("Karen");
    FragTrap frag2("Devorah");
    
    std::cout << "CLAP\n";
    clap1.attack(clap2.getName());
    clap2.takeDamage(clap1.getHitPoints());
    clap2.beRepaired(5);
    clap2.takeDamage(5);
    clap2.takeDamage(5);
    std::cout << "SCAV\n";
    scav1.attack(scav2.getName());
    scav2.takeDamage(scav1.getHitPoints());
    scav2.guardGate();
    std::cout << "FRAG\n";
    frag1.attack(scav1.getName());
    frag2.highFivesGuys();
    
    


}
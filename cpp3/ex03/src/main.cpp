/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:03:35 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/29 11:57:07 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int main()
{
    ClapTrap clap1("Aurelio");
    ClapTrap clap2("Zaturnino");

    ScavTrap scav1("Emanuel");
    ScavTrap scav2("Wilson");

    FragTrap frag1("Karen");
    FragTrap frag2("Devorah");

    DiamondTrap diamond1("Manolo");
    DiamondTrap diamond2("Páco");
    
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
    std::cout << "DIAMOND\n";
    diamond1.whoAmI();
    diamond2.attack(diamond1.getName());
    diamond1.takeDamage(diamond1.getHitPoints());
    std::cout << "DESTROY\n";
}
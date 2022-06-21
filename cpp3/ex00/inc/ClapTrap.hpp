/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:31:23 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/20 20:46:37 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

class ClapTrap
{
    private:
        std::string name;
        int hitPoints = 10;
        int EnergyPoints = 10;
        int AttackDamage = 0;
        
        
    public:
        ClapTrap(std::string name);
        ~ClapTrap();

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

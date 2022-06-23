/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:31:23 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/23 19:52:22 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

class ClapTrap
{
    protected:
        std::string name;
        int hitPoints = 10;
        int EnergyPoints = 10;
        int AttackDamage = 0;
        
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(ClapTrap &orig);
        ClapTrap& operator=(ClapTrap const& a);
        
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName(void);
        int getHitPoints(void);
        
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:35:32 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/28 10:11:56 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

    class ScavTrap: public ClapTrap
    {
        public:
            ScavTrap();
            ScavTrap(std::string name);
            ~ScavTrap();
            ScavTrap(ScavTrap const &orig);
            void guardGate();

            void attack(std::string const & target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
    };

#endif

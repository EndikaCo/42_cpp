/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:35:32 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/29 10:21:57 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

    class ScavTrap: virtual public ClapTrap
    {
        public:
            ScavTrap();
            ScavTrap(std::string name);
            ~ScavTrap();
            ScavTrap(ScavTrap const &orig);
            void guardGate();
    };

#endif

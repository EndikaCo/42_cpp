/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 20:15:35 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/29 20:27:01 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include<iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void setname(std::string name);
        void announce(void);
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif

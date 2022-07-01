/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:14:26 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/01 12:14:27 by ecorreia         ###   ########.fr       */
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
        Zombie();   // Declare constructor
        ~Zombie();  // Declare Destructor
        void putname(std::string name);
        void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif
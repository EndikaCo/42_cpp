/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:15:36 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/15 12:14:11 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Karen.hpp"
#include <iostream>

Karen::Karen(/* args */)
{
}

Karen::~Karen()
{
}

void Karen::complain( std::string level)
{
    int i;
	std::string levels[] ={"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (i = 0; i < 4; i++)
    {
         if(level.compare(levels[i]) == 0)
            break;
    }
    switch (i)
    {
        case 0:
            (this->*(&Karen::debug))();
            (this->*(&Karen::info))();
            (this->*(&Karen::warning))();
            (this->*(&Karen::error))();
            break;
        case 1:
            (this->*(&Karen::info))();
            (this->*(&Karen::warning))();
            (this->*(&Karen::error))();
           break;
        case 2:
            (this->*(&Karen::warning))();
            (this->*(&Karen::error))();
            break;
        case 3:
          (this->*(&Karen::error))();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            return;
    }
}

void Karen::debug( void ){
    std::cout << "[ DEBUG ] I love to get extra bacon for my "
    "7XL-double-cheese-triple-pickle-special-ketchup burger."
    "I just love it!." << std::endl;
}
void Karen::info( void ){
    std::cout << "[ INFO ] I cannot believe adding extra bacon cost more money."
    " You don’t put enough! If you did I would not have to ask for it!."
    <<std::endl;
}
void Karen::warning( void ){
    std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free."
    "I’ve been coming here for years and you just started working here last"
    "month.." << std::endl;
}
void Karen::error( void ){
    std::cout << "[ ERROR ] This is unacceptable, I want to speak to the manager now.."
    << std::endl;
}
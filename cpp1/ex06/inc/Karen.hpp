/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:15:38 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/01 12:15:39 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Karen(/* args */);
    ~Karen();
    void complain( std::string level );
    void(*member_pointer)(void);// declare pointers to member functions
};
#endif
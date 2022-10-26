/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:58:54 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/11 12:55:20 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain(/* args */);
    ~Brain();
    std::string getIdeas(int n);
    void setIdea(std::string idea);
    Brain(Brain const &orig);
    Brain& operator=(Brain const& orig);
}; 

#endif

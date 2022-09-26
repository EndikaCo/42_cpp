/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:54:54 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/01 11:18:39 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "../inc/Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon      &weapon;

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
};

#endif
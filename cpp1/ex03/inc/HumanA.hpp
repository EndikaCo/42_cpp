/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:54:54 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/09 14:19:57 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

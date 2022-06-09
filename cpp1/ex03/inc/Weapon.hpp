/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:54:57 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/09 12:55:03 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
    private:
    std::string type;

    public:
    Weapon(std::string type);
    ~Weapon();
    std::string &getType();
    void setType(std::string type);
};

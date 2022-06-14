/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:01:50 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/14 21:11:30 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Contact.hpp"

int swap_order(Contact *contact)
{
    for(int i = 1; i < 8; i++) 
        contact[i - 1] = contact[i];
    return 0;
}

std::string ft_trunc(std::string str)
{
    if(str.size() > 10)
        str.replace(9, str.size() - 9, ".");
    return str;
}

int ft_isvalid(std::string str)
{
    if(str.size() > 9)
       return 1;
    try
    {
        if(std::stoi(str))
            return 0;
        else
         std::cerr <<  str <<  " Is not a valid phone number" << '\n';
    }
    catch(const std::exception& e)
    {
       std::cerr <<  str <<  " Is not a valid phone number" << '\n';
    }
    return 1;
}

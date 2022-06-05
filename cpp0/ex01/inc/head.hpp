/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:00:02 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/05 15:15:40 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_HPP
#define HEAD_HPP

#include <iostream>

class Contact
{
    private:
        int id;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone;
        std::string darkest_secret;
        
    public:
        void addContact();
        void printContacts(int index);
        void printMore(int index);

        void test();
};

//UTILS
std::string ft_trunc(std::string str);
int swap_order(Contact *contact);
int ft_isvalid(std::string str);

#endif
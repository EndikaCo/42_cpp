/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:00:02 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/29 19:03:07 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
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
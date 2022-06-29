/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:02:05 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/29 19:45:59 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>
# include "../inc/Contact.hpp"

void Contact::addContact()
{ 
    std::cout << "First name:\n";
    std::getline(std::cin, first_name);
    std::cout << "Last name:\n";
    std::getline(std::cin, last_name);
    std::cout << "Nickname:\n";
    std::getline(std::cin, nickname);
    std::cout << "PHONE:\n";

    std::getline(std::cin, phone);
    while (ft_isvalid(phone))
    {
        std::cout << "Type a valid Phone number:\n";
        std::getline(std::cin, phone);
    }
}

void Contact::printContacts(int index)
{   
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << index + 1 << "|";
    std::cout << std::setw(10);
    std::cout << ft_trunc(first_name) << "|";
    std::cout << std::setw(10);
    std::cout << ft_trunc(last_name) << "|";
    std::cout << std::setw(10);
    std::cout << ft_trunc(nickname) << "|" << std::endl;
}

void Contact::printMore(int index)
{   
    std::cout << "INDEX:" << std::endl;
    std::cout << index + 1 << std::endl; 
    std::cout << "FIRST NAME:" << std::endl;
    std::cout << ft_trunc(first_name) << std::endl;
    std::cout << "LAST NAME:" << std::endl;
    std::cout << ft_trunc(last_name) << std::endl;
    std::cout << "NICKNAME:" << std::endl;
    std::cout << ft_trunc(nickname) << std::endl;
    std::cout << "PHONE:" << std::endl;
    std::cout << ft_trunc(phone) << std::endl;
}

void Contact::test()
{
    first_name = (rand() % 26) + 65;
}
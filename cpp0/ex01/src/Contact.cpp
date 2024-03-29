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

std::string Contact::getData()
{   
        std::string aux;
    while(1)
    {
        std::getline(std::cin, aux);
        if(aux.empty())
            std::cout << "Field can't be empty, try again\n";  
        else
            return aux;
    }
}

void Contact::addContact()
{ 
    std::cout << "First name:\n";
    first_name = getData();
    std::cout << "Last name:\n";
    last_name = getData();
    std::cout << "Nickname:\n";
    nickname = getData();
    std::cout << "PHONE:\n";
    phone = getData() ;
    while (ft_isvalid(phone))
    {
        std::cout << "Type a valid Phone number:\n";
        std::getline(std::cin, phone);
    }
    std::cout << "Darkest secret:\n";
    darkest_secret = getData() ;
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
    std::cout << first_name << std::endl;
    std::cout << "LAST NAME:" << std::endl;
    std::cout << last_name << std::endl;
    std::cout << "NICKNAME:" << std::endl;
    std::cout << nickname << std::endl;
    std::cout << "PHONE:" << std::endl;
    std::cout << phone << std::endl;
    std::cout << "Darkest secret:" << std::endl;
    std::cout << darkest_secret << std::endl;
}
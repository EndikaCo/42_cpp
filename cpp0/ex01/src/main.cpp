/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:58:01 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/29 19:38:19 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/PhoneBook.hpp"

void welcome_message()
{
    std::cout   << "\n _____________________________________\n\n"
                << "          CONTACT BOOK\n" 
                << " Type ADD, SEARCH or EXIT to continue.\n"
                << "_____________________________________\n";   
}

int add(int n_contacts, Contact *contact)
{   
    if(n_contacts == 8)
    {
        swap_order(contact);
        contact[7].addContact();
        return 1;
    }
    contact[n_contacts++].addContact();
    return 0;    
}

void search(Contact *contact)
{
    std::string search;
        
    std::cout << "\n ___________________________________________\n";
    std::cout << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
    for(int i = 0; i < 8; i++)
        contact[i].printContacts(i);
    std::cout << " ___________________________________________\n";  
    std::cout << "\nType the contact index number for more info:\n";
    std::getline(std::cin, search);
    try
    {
        if(std::stoi(search) && std::stoi(search) < 9 && std::stoi(search) > 0)
            contact[std::stoi(search) - 1].printMore(std::stoi(search) - 1);
        else
         std::cerr <<  search <<  " Is not a valid index" << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr <<  search <<  " Is not a valid index" << '\n';
    }
}

int main()
{
    std::string command;
    //Contact contact[8];
    
    //◦ The PhoneBook must be represented as as an instance of a class in your code it must contain an array of contact.
    PhoneBook PhoneBook;

    int  n_contacts;

    n_contacts = 0;
    while (1)
    {   
        welcome_message();
        std::getline(std::cin, command);
        if(!command.compare("ADD"))
            if(!add(n_contacts, PhoneBook.getContacts()))
                n_contacts++;
        if(!command.compare("SEARCH"))
            search(PhoneBook.getContacts());
        if(!command.compare("EXIT"))
            return (0);   
    }
}
        
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:58:01 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/14 21:11:28 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Contact.hpp"

void welcome_message()
{
    std::cout   << "\n _____________________________________\n\n"
                << "          CONTACT BOOK\n" 
                << " Type ADD, SEARCH or EXIT to continue.\n"
                << "_____________________________________\n";   
}

int add(int n_contacts, Contact *contact, int c)
{   
    if(n_contacts == 8)
    {
        swap_order(contact);
        contact[7].addContact();
        return 1;
    }
    contact[c++].addContact();
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
    Contact contact[8];
    int n_contacts;
    int c;

    c = 0;
    n_contacts = 0;
    while (1)
    {   
        welcome_message();
        std::getline(std::cin, command);
        if(!command.compare("ADD"))
            if(add(n_contacts, contact, c++))
                n_contacts++;
        if(!command.compare("SEARCH"))
            search(contact);
        if(!command.compare("EXIT"))
            return (0);
        if(!command.compare("test"))
        {
            for(int i = 0; i < 8; i++)
            {
                contact[i].test();
                n_contacts++; 
                std::cout << "n_contacts:" << n_contacts << std::endl;
            }
            for(int i = 0; i < 8; i++)
                contact[i].printContacts(i);   
        }          
    }
}
        
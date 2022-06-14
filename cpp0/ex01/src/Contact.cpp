/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:02:05 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/14 21:11:24 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe un programa que se comporte como un inútil increíble libro de contactos.
Tómate el tiempo de darle a tu programa un nombre a la altura.
 Cuando el programa inicie, el usuario tendrá que introducir texto.
Debes aceptar los comandos ADD, SEARCH y EXIT. Cualquier otra entrada se descarta.
El programa empieza vacío (sin contactos), no utiliza ningún tipo de reserva dinámica,
y no puede guardar más de 8 contactos. Si un noveno se añade, reemplaza el más antiguo.
*/

# include <iomanip>
# include "../inc/Contact.hpp"

void Contact::addContact()
{
    std::string aux;
    std::cout << "First name:\n";
    std::getline(std::cin, first_name);
    std::cout << "Last name:\n";
    std::getline(std::cin, last_name);
    std::cout << "Nickname:\n";
    std::getline(std::cin, nickname);
    std::cout << "PHONE:\n";
    std::getline(std::cin, aux);
    while (ft_isvalid(phone))
    {
        std::cout << "PHONE:\n";
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
    std::cout <<index + 1 << std::endl; 
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
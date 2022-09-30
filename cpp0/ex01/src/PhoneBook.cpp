/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.CPP                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:03:15 by ecorreia          #+#    #+#             */
/*   Updated: 2022/09/30 12:04:14 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

Contact *PhoneBook::getContacts()
{
    return contacts;
}

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

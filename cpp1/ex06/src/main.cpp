/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:31:35 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/15 10:33:49 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Karen.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Type: DEBUG, INFO, WARNING, ERROR to select the Karen complaint\n";
        return (1);
    }
    Karen karen;
    karen.complain(argv[1]);
    return (0);
} 
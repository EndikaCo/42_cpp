/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:32:18 by ecorreia          #+#    #+#             */
/*   Updated: 2022/05/29 19:02:16 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int y;
    int x;

    y = 0;
    x = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {   
        while(argv[x])
        {
            y = 0;
            while(argv[x][y])
            {
                std::cout << (char)toupper(argv[x][y]);
                y++;
            }
            std::cout << " ";
            x++;
        }        
    }
    return 0;
}
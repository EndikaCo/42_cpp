/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:31:59 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/08 12:52:25 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
   std::string str= "HI THIS IS BRAIN";
   std::string *stringPTR = &str;
   std::string &stringREF = str;
   
   std::cout << "str=" << str << std::endl;
   std::cout << "&str=" << &str << std::endl;
   std::cout << "stringPTR=" << stringPTR << std::endl;
   std::cout << "*stringPTR=" << *stringPTR << std::endl;
   std::cout << "&stringPTR=" << &stringPTR << std::endl;
   std::cout << "&stringREF=" << &stringREF << std::endl;
   std::cout << "stringREF=" << stringREF << std::endl;
   
   return 0;
}

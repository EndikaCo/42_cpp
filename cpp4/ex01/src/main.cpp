/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:10:50 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/08 12:56:46 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"


void check_deep(Dog &basic)
{
    Dog tmp = basic;    
}

int main()
{
    /*
    Animal *animals[4];
    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();

    for (int i = 0; i < 4; i++)
        delete animals[i];  
    */
   
    Dog basic;
    std::cout << std::endl << "check deep" << std::endl;
    
    check_deep(basic);
    
    //const Animal* j = new Dog();
    //const Animal* i = new Cat();
    
    //delete j;//should not create a leak
    //delete i;
    
}
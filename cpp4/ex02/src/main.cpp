/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:10:50 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/12 11:13:11 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"


int main()
{
    Animal *animals[4];
    //animals[0] = new Animal(); //abstract because of pure virtual MAkesound
    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();
    
    std::cout << "Type " << animals[0]->getType() << std::endl;
    animals[0]->makeSound();
    std::cout << "Type " << animals[3]->getType() << std::endl;
    animals[3]->makeSound();
    
    for (int i = 0; i < 4; i++)
        delete animals[i];  
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:10:50 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/12 09:47:36 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"


void check_deep(Dog &basic)
{
    std::cout << std::endl << "check deep" << std::endl;
    Dog tmp = basic;    
    tmp.makeSound();
    tmp.b_setIdea("idea 1");
    tmp.b_setIdea("idea 2");
    tmp.b_setIdea("idea 3");
    std::cout << std::endl;
    
    for(int i = 0; !tmp.b_getIdeas(i).empty(); i++)
        std::cout << "The idea: " << tmp.b_getIdeas(i) << std::endl;
    std::cout << std::endl;
}

int main()
{
    Animal *animals[4];
    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();

    for (int i = 0; i < 4; i++)
        delete animals[i];  
   
    Dog basic;
    
    check_deep(basic);
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;//should not create a leak
    delete i;
}

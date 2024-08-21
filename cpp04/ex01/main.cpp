/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:47:47 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/20 16:06:34 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	 Animal* animals[10];


    for (int i = 0; i < 5; ++i)
        animals[i] = new Dog();

    for (int i = 5; i < 10; ++i)
        animals[i] = new Cat();

    // animals[11] = new Dog(*dynamic_cast<Dog*>(animals[2]));
    
    for (int i = 0; i < 10; ++i) {
        std::cout << animals[i]->getType() << " makes sound: ";
        animals[i]->makeSound();
    }
    
    // std::cout << animals[11]->getType() << " Makes sound: ";
    // animals[11]->makeSound();
    // delete animals[11];
    
    for (int i = 0; i < 10; ++i) 
        delete animals[i];

    return 0;
}

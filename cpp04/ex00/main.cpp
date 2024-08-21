/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:47:47 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/18 19:00:39 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << meta->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
meta->makeSound();
j->makeSound();
i->makeSound();

std::cout << std::endl;
const WrongAnimal* oui = new WrongAnimal();
const WrongAnimal* non = new WrongCat();
std::cout << oui->getType() << " " << std::endl;
std::cout << non->getType() << " " << std::endl;
oui->makeSound();
non->makeSound();

return 0;
}

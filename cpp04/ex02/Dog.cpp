/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:29:28 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/20 16:05:49 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog"){
	std :: cout << "Dog Constructor" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog(){
	delete this->brain;
	std :: cout << "Dog Destructor" << std::endl;
}

Dog::Dog(const Dog &instance):Animal(instance){
	std :: cout << "Dog copy Constructor" << std::endl;
	this->brain = new Brain(*instance.brain);
}

Dog& Dog::operator=(const Dog &instance){
	std :: cout << "Operator Dog" << std :: endl;
	Animal::operator=(instance);
	*this->brain = *instance.brain;
	return(*this);
}

void  Dog::makeSound()const {
	std::cout << "woaf woaf" << std::endl;
}
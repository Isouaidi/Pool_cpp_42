/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:29:28 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/20 15:10:57 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog"){
	std :: cout << "Dog Constructor" << std::endl;
}

Dog::~Dog(){
	std :: cout << "Dog Destructor" << std::endl;
}

Dog::Dog(const Dog &instance): Animal(instance){
	std :: cout << "Dog copy Constructor" << std::endl;
	*this = instance;
}

Dog& Dog::operator=(const Dog &instance){
	std :: cout << " operator Dog" << std :: endl;
	Animal::operator=(instance);
	return(*this);
}

void  Dog::makeSound()const {
	std::cout << "woaf woaf" << std::endl;
}
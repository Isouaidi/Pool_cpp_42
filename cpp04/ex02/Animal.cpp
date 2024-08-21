/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:18:58 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/20 16:20:50 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Animal"){
	std::cout << "Animal Constructor" << std :: endl;
}

Animal::Animal(std::string type):type(type){
	std::cout << "Animal Constructor" << std :: endl;
}

Animal::~Animal(){
	std::cout << "Animal Destructor" << std :: endl;
}

Animal::Animal(const Animal &instance){
	std::cout << "Copy constructor" << std::endl;
	*this = instance;
}

Animal& Animal::operator=(const Animal &instance){
	std::cout << "Assignment operator." << std::endl;
	this->type = instance.type;
	return *this;
}

void	Animal::makeSound()const {
	std::cout << "I am Animal " << std :: endl;
}

std::string Animal::getType()const{
	return(this->type);
}


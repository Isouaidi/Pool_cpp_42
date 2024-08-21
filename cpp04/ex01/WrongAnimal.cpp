/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:12:16 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/18 18:48:16 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal"){
	std::cout << "WrongAnimal Constructor" << std :: endl;
}

WrongAnimal::WrongAnimal(std::string type):type(type){
	std::cout << "WrongAnimal Constructor" << std :: endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor" << std :: endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &instance){
	std::cout << "Copy constructor" << std::endl;
	*this = instance;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &instance){
	this->type = instance.type;
	return *this;
}

void	WrongAnimal::makeSound()const{
	std::cout << "I am WrongAnimal " << std :: endl;
}

std::string WrongAnimal::getType()const{
	return(this->type);
}
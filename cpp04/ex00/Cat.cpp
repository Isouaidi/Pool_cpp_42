/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:29:39 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/20 15:11:52 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat"){
	std :: cout << "Cat Constructor" << std::endl;
}

Cat::~Cat(){
	std :: cout << "Cat Destructor" << std::endl;
}

Cat::Cat(const Cat &instance):Animal(instance){
	std :: cout << "Cat copy Constructor" << std::endl;
	*this = instance;
}

Cat& Cat::operator=(const Cat &instance){
	std :: cout << " operator Cat" << std :: endl;
	Animal::operator=(instance);
	return(*this);
}

void  Cat::makeSound()const {
	std::cout << "Miaou Miaou" << std::endl;
}
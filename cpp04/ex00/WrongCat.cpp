/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:31:32 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/24 12:22:46 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat"){
	std :: cout << "WrongCat Constructor" << std::endl;
}

WrongCat::~WrongCat(){
	std :: cout << "WrongCat Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &instance): WrongAnimal(instance){
	std :: cout << "WrongCat copy Constructor" << std::endl;
	*this = instance;
}

WrongCat& WrongCat::operator=(const WrongCat &instance){
	std :: cout << " operator WrongCat" << std :: endl;
	WrongAnimal::operator=(instance);
	return(*this);
}

void  WrongCat::makeSound()const{
	std::cout << "Miaou Miaou" << std::endl;
}
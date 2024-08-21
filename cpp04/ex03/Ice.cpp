/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:32:47 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/25 15:33:51 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice"){
	std::cout << "Constructor Ice" << std::endl;
}

Ice::~Ice(){
	std::cout << "Destructor Ice" << std::endl;
}

Ice::Ice(const Ice &instance):AMateria(instance){
	std::cout << "Ice copy constructor" << std ::endl;
}

Ice& Ice::operator=(const Ice &instance){
	std::cout << "Ice Assignment operator" << std::endl;
	AMateria::operator=(instance);
	return *this;
}

AMateria *Ice::clone() const{
	return(new Ice(*this));
}

void Ice::use(ICharacter& target){
	std::cout << "Ice : * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
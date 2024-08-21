/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:04:12 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/25 15:33:55 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure():AMateria("cure"){
	std::cout << "Constructor Cure" << std::endl;
}

Cure::~Cure(){
	std::cout << "Destructor Cure" << std::endl;
}

Cure::Cure(const Cure &instance):AMateria(instance){
	std::cout << "Cure copy constructor" << std ::endl;
}

Cure& Cure::operator=(const Cure &instance){
	std::cout << "Cure Assignment operator" << std::endl;
	AMateria::operator=(instance);
	return *this;
}

AMateria *Cure::clone() const{
	return(new Cure(*this));
}

void Cure::use(ICharacter& target){
	std::cout << "Cure : * heals " << target.getName() << " 's wounds *" << std::endl;
}


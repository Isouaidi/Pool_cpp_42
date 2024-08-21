/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:02:56 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/24 16:13:27 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout << "AMateria constructor" << std::endl;
}

AMateria::~AMateria(){
	std::cout << "Destructor AMateria" << std::endl;
}

AMateria::AMateria(std :: string const &type){
	std::cout << "AMateria constructor" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &instance){
	std::cout << "AMateria copy constructor" << std::endl;
	*this = instance;
}

AMateria& AMateria::operator=(const AMateria& instance){
	std::cout << "AMateria Assignment operator" << std::endl;
	this->type = instance.type;
	return *this;
}

std::string const &AMateria::getType() const{
	return(this->type);
}



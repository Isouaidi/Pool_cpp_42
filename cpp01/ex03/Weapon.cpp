/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:04:25 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/14 18:26:03 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name){
	this->name = name;
}
Weapon::~Weapon(){
	
}

const std::string Weapon::getType()const
{
	return(this->name);
}

void Weapon::setType(std::string a)
{
	this->name = a;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:50:30 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/25 17:06:25 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():name("Default"), inventory(){
	std::cout << "Character Constructeur" << std::endl;
}

Character::~Character(){
	std::cout << "Character Destructeur" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];	
	}
}

Character::Character(const Character &instance){
	std::cout << "Character Copy Constructeur" << std::endl;
	this->name = instance.name;
	for(int i = 0; i < 4; i++)
	{
		if (instance.inventory[i])
			this->inventory[i] = instance.inventory[i]->clone();
	}
}

Character::Character(const std::string &name):name(name), inventory(){
	std::cout << "Character Constructeur" << std::endl;
}

Character &Character::operator=(const Character &instance){
	std::cout << "Character Assignment operator" << std::endl;
	this->name = instance.name;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (instance.inventory[i])
			this->inventory[i] = instance.inventory[i]->clone();
	}
	return *this;
}

std::string const &Character::getName() const{
	return(this->name);
}

void  Character::equip(AMateria* mater){
	for (int i = 0; i < 4; i++)
	{
		if(!(this->inventory[i])){
			this->inventory[i] = mater;
			return;
		}
	}
	delete mater;
}

void Character::unequip(int idx){
	if (idx >= 0 && idx <= 3){
		this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx <= 3 && this->inventory[idx])
		this->inventory[idx]->use(target);
}



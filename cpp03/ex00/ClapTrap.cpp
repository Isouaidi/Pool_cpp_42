/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:19:10 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/17 16:19:34 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap :: ClapTrap(const std::string name): name(name), Hit_points(10), Energy_points(10), Attack_damage(0){
	std::cout << "Call constructor : " << this->name << std::endl;
}

ClapTrap :: ClapTrap(): name("Default"), Hit_points(10), Energy_points(10), Attack_damage(0){
	std::cout << "Call constructor : " << this->name << std::endl;
}

ClapTrap :: ~ClapTrap(){
	std::cout << "Call Destructor : " << this->name << std::endl;
}

ClapTrap :: ClapTrap(const ClapTrap &instance){
	std::cout << "Copy constructor." << std::endl;
	*this = instance;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &instance){
	this->name = instance.name;
	this->Energy_points = instance.Energy_points;
	this->Attack_damage = instance.Attack_damage;
	this->Hit_points = instance.Hit_points;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (this->Energy_points > 0 && this->Hit_points > 0){
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
		this->Energy_points --;
	}
	else if (this->Energy_points <= 0)
		std::cout << this->name << " is dead" << std ::endl;
	else
		std::cout << this->name << " is tired" << std ::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->Energy_points > 0 && this->Hit_points > 0)
	{
		Energy_points --;
		Hit_points += amount;
		std::cout << this->name << " is repaired, of : " << amount << " points"<< std :: endl; 
	}
	else if (this->Energy_points <= 0)
		std::cout << this->name << " is dead" << std ::endl;
	else
		std::cout << this->name << " is tired" << std ::endl;
	
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->Hit_points > 0)
	{
		this->Hit_points -= amount;
		std::cout << name << " Take : " << amount << " damage" << std :: endl;	
	}
	else
		std :: cout << this->name << " died before" << std::endl;
}

std::string ClapTrap::get_name()const{
	return(this->name);
}

int ClapTrap::get_point()const{
	return (this->Hit_points);
}

int ClapTrap::get_dam()const{
	return (this->Attack_damage);
}

int ClapTrap::get_Ener()const{
	return (this->Energy_points);
}
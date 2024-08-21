/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:07:33 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/17 21:09:16 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap :: ScavTrap() : ClapTrap()
{
	std :: cout << "ScavTrap constructor" << std ::endl;
	this->Energy_points = 50;
	this->Hit_points = 100;
	this->Attack_damage = 20;
}

ScavTrap :: ScavTrap(const std::string name): ClapTrap(name){
	std :: cout << "ScavTrap constructor" << std ::endl;
	this->Energy_points = 50;
	this->Hit_points = 100;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &instance): ClapTrap(instance){
	std::cout << "ScavTrap copy constructor." << std::endl;
	*this = instance;
}

ScavTrap::~ScavTrap(){
	std :: cout << "ScavTrap destructor" << std ::endl;
}

void	ScavTrap::guardGate()const {
	std :: cout << " ScavTrap ("<< name << ")is now in Gate keeper mode " << std :: endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &instance){
	std :: cout << " operator ScavTrap" << std :: endl;
	ClapTrap::operator=(instance);
	return(*this);
}

void ScavTrap::attack(const std :: string& target){
	std :: cout << "ScavTrap attack ";
	ClapTrap::attack(target);
}




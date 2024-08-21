/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:07:33 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/17 21:07:07 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// #include <iostream>

FragTrap::FragTrap()
{
	std :: cout << "FragTrap constructor" << std ::endl;
	this->Energy_points = 100;
	this->Hit_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name){
	std :: cout << "FragTrap constructor" << std ::endl;
	this->Energy_points = 100;
	this->Hit_points = 100;
	this->Attack_damage = 30;
}
FragTrap::FragTrap(const FragTrap &instance) : ClapTrap(instance){
	std::cout << "FragTrap copy constructor." << std::endl;
	*this = instance;
}

FragTrap::~FragTrap(){
	std :: cout << "FragTrap destructor" << std ::endl;
}

void	FragTrap::highFivesGuys()const {
	std :: cout << "FragTrap ("<< name << ") positive high fives request" << std :: endl;
}

FragTrap& FragTrap::operator=(const FragTrap &instance){
	std :: cout << " operator FragTrap" << std :: endl;
	ClapTrap::operator=(instance);
	return(*this);
}

void FragTrap::attack(const std :: string& target){
	std :: cout << "FragTrap attack ";
	ClapTrap::attack(target);
}



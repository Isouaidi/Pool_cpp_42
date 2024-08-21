/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:16:38 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/05 20:09:22 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string ok){
	this->name = ok;	
}

HumanB::~HumanB(){	
}

void HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
}
void HumanB::attack()
{
	if (this->weapon == NULL)
		std::cout << HumanB::name << " attack without weapon " << std :: endl;
	else
		std::cout << name << " attack with their " << weapon->getType() << std :: endl;
		
}

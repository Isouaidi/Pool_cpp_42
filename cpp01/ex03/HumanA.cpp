/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:38:15 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/05 20:06:47 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA :: HumanA(std::string str, Weapon &w) : name(str), weapon(w){}

HumanA :: ~HumanA(){	
}

void HumanA :: attack()
{
	std::cout << name << " attack with their " << weapon.getType() << std :: endl;
} 

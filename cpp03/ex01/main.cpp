/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:23:34 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/17 21:09:48 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){

// ClapTrap defau;

ScavTrap emir("ilyes");

ScavTrap ilyes(emir);


// ClapTrap oui(ilyes);

ilyes.attack("moi");
ilyes.takeDamage(5);
ilyes.beRepaired(3);
ilyes.beRepaired(3);
ilyes.guardGate();


// std::cout << defau.get_name() << " hit point : " << defau.get_point() <<std::endl;  
std::cout << ilyes.get_name() << " energy : " <<ilyes.get_Ener() <<std::endl;
std::cout <<ilyes.get_name() << " hit point : " << ilyes.get_point() <<std::endl;  

}


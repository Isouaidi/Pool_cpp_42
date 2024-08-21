/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:23:34 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/17 21:01:36 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(){

// ClapTrap defau;

FragTrap ilyes;

FragTrap emir(ilyes);
// ScavTrap emir;

// ClapTrap oui(ilyes);

emir.attack("moi");
emir.takeDamage(5);
emir.beRepaired(3);
emir.beRepaired(3);
emir.highFivesGuys();

// emir.attack("ok");
// emir.takeDamage(5);
// emir.beRepaired(3);
// emir.beRepaired(3);
// emir.guardGate();


// std::cout << defau.get_name() << " hit point : " << defau.get_point() <<std::endl;  
std::cout << emir.get_name() << " energy : " <<emir.get_Ener() <<std::endl;
std::cout <<emir.get_name() << " hit point : " << emir.get_point() <<std::endl;

// std::cout << emir.get_name() << " energy : " <<emir.get_Ener() <<std::endl;
// std::cout <<emir.get_name() << " hit point : " << emir.get_point() <<std::endl;

}


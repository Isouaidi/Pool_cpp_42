/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:23:34 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/13 16:00:12 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){

ClapTrap defau;

// ClapTrap ilyes("ilyes");

// ClapTrap oui(ilyes);

defau.attack("moi");
defau.takeDamage(5);
defau.beRepaired(3);
defau.beRepaired(3);


std::cout << defau.get_name() << " energy : " <<defau.get_Ener() <<std::endl;
std::cout << defau.get_name() << " hit point : " << defau.get_point() <<std::endl;  

}


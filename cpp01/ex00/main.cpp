/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:24:36 by isouaidi          #+#    #+#             */
/*   Updated: 2024/05/30 18:58:49 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie;

	Zombie zz = Zombie("too");
	
	Zombie *za = newZombie("zz");
	
	randomChump("oui");
	
	zz.announce();
	za->announce();
	
	delete (za);
}
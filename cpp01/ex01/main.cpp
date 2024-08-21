/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:24:36 by isouaidi          #+#    #+#             */
/*   Updated: 2024/05/30 18:52:48 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie;
	int N = 10;
	
	Zombie *za = zombieHorde(N, "ilyes");
	
	for(int i = 0; i < N; i++)
		za[i].announce();

	delete[] za;
}
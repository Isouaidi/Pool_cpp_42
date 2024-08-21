/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:29:48 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/17 16:01:58 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
private:
	std :: string name;
	int Hit_points;
	int Energy_points;
	int Attack_damage;
public:
	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &instance);
	ClapTrap& operator=(const ClapTrap &instance);
	~ClapTrap();

	std::string get_name()const;
	int get_point() const;
	int get_dam() const;
	int get_Ener() const;
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:19:32 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/17 20:36:40 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std :: string name);
	FragTrap(const FragTrap &instance);
	FragTrap& operator=(const FragTrap &instance);
	~FragTrap();
	
	void attack(const std::string& target);
	void highFivesGuys(void) const;
};	 

// #endif
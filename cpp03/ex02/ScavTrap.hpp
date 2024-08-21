/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:57:06 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/17 16:38:12 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_H

# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std :: string name);
	ScavTrap(const ScavTrap &instance);
	ScavTrap& operator=(const ScavTrap &instance);
	~ScavTrap();
	
	void attack(const std::string& target);
	void guardGate() const ;
};	 

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:40:59 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/05 20:04:16 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"



class HumanA
{
private:
	std :: string name;
	Weapon& weapon;
	
public:
	HumanA(std::string str, Weapon &w);
	~HumanA();
	void attack();
};

#endif
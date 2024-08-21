/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:16:33 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/05 20:09:32 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
private:
	std :: string name;
	Weapon *weapon;
public:
	HumanB(std::string str);
	~HumanB();
	void attack();
	void setWeapon(Weapon &w);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:17:24 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/14 18:25:51 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
	private:
		std :: string  name;
	public:
	
		const std :: string getType()const ;
		void setType(std :: string);
		Weapon(std :: string name);
		~Weapon();
};

#endif
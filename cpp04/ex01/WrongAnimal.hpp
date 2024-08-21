/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:16:07 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/18 19:03:32 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std ::string type;
public:
	WrongAnimal();
	WrongAnimal(const std :: string type);
	WrongAnimal(const WrongAnimal &instance);
	WrongAnimal& operator=(const WrongAnimal &instance);
	virtual ~WrongAnimal();

	void makeSound()const;
	
	std :: string getType()const;
};
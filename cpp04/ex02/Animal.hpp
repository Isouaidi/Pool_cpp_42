/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:48:35 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/20 16:21:19 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected:
	std ::string type;
public:
	Animal();
	Animal(const std :: string type);
	Animal(const Animal &instance);
	Animal& operator=(const Animal &instance);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	
	std :: string getType() const;
};


#endif
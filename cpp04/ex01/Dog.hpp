/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:06:01 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/25 15:44:55 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
// class Brain;

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &instance);
	Dog& operator=(const Dog &instance);
	~Dog();

	void makeSound()const ;
};

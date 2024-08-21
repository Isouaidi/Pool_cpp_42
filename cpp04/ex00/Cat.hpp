/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:02:01 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/25 15:46:24 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &instance);
	Cat& operator=(const Cat &instance);
	~Cat();
	
	void makeSound() const;
};
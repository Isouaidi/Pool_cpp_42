/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:39:21 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/19 14:22:25 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Constructor" << std :: endl;
}

Brain::Brain(Brain const &instance){
	std::cout << "Brain copy Constructor" << std :: endl;
	*this = instance;
}

Brain& Brain::operator=(Brain const &instance){
	std::cout << "Brain assignment operator." << std::endl;
	std::copy(instance.ideas, instance.ideas + 100, this->ideas);
	return(*this);
}

Brain::~Brain(){
	std::cout << "Brain Desstructor" << std :: endl;
}
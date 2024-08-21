/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:36:25 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/25 15:35:44 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource():copy(){
	std::cout << "MateriaSource Constructeur" << std::endl;
}

MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource Desstructeur" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (this->copy[i])
			delete this->copy[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &instance){
	std::cout << "MateriaSource Copy Constructeur" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (instance.copy[i])
			this->copy[i] = instance.copy[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &instance){
	std::cout << "MateriaSource Assignment operator" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (this->copy[i])
			delete this->copy[i];
		if (this->copy[i])
			this->copy[i] = instance.copy[i]->clone();
	}
	return *this;
}
 
void MateriaSource::learnMateria(AMateria *mater){
	for (int i = 0; i < 4; i++)
	{
		if (this->copy[i] == NULL){
			this->copy[i] = mater;
			return;
		}
	}
	delete mater;
}

AMateria* MateriaSource::createMateria(std::string const &t){
	for (size_t i = 0; i < 4; i++)
	{
		if (this->copy[i] && this->copy[i]->getType() == t)
			return(this->copy[i]->clone());
	}
	return(0);			
}
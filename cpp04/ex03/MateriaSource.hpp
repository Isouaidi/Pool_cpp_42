/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:44:30 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/25 14:21:32 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		AMateria *copy[4];
	public:
	
		MateriaSource();
		MateriaSource(const MateriaSource &instance);
		MateriaSource &operator=(const MateriaSource &instance);
		virtual ~MateriaSource();
	
		virtual void learnMateria(AMateria *mater);
		virtual AMateria* createMateria(std::string const &t);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:30:42 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/25 15:05:09 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <iostream>

#include "ICharacter.hpp"

class AMateria
{
	protected:
	
	std::string type;
	
	public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &instance);
	AMateria& operator=(const AMateria& instance);
	virtual ~AMateria();
	
	std::string const &getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};
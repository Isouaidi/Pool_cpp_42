/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:03:54 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/25 15:34:11 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "AMateria.hpp"
#include "Character.hpp"


class Cure : public AMateria 
{
	public:
	Cure();
	Cure(const Cure &instance);
	Cure& operator=(const Cure &instance);
	virtual ~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};



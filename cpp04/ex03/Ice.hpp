/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:28:46 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/25 15:34:21 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "AMateria.hpp"
#include "Character.hpp"


class Ice : public AMateria 
{
	public:
	Ice();
	Ice (const Ice &instance);
	Ice& operator=(const Ice &instance);
	virtual ~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:45:06 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/25 15:10:51 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria *inventory[4];
public:
	Character();
	Character(const std::string &name);
	Character(const Character &instance);
	Character &operator=(const Character &instance);
	virtual ~Character();

	virtual std::string const &getName() const;
	virtual void equip(AMateria* mater);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};



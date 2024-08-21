/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:36:37 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/19 14:21:55 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
protected :
	std::string ideas[100];
public:
	Brain();
	Brain(Brain const &instance);
	Brain& operator=(const Brain &instance);
	~Brain();
};


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:26:35 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 21:09:42 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#include <stdint.h>


typedef struct Data{
	int Npatron_Compositor_Of_42;
}Data;


class Serializer
{
	public:
	Serializer();
	Serializer(const Serializer &instance);
	Serializer &operator=(const Serializer &instance);
	~Serializer();
	
	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};



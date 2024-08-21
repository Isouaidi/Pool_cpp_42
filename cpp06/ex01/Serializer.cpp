/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:37:38 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 21:20:42 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer(){}

Serializer::Serializer(const Serializer &instance){
	*this = instance;
}

Serializer& Serializer::operator=(const Serializer &instance){
	(void)(instance);
	return(*this);
}

Serializer::~Serializer(){}


uintptr_t Serializer::serialize(Data* ptr){
	
	uintptr_t convert;
	
	convert = reinterpret_cast<uintptr_t>(ptr);

	return (convert);
}

Data* Serializer::deserialize(uintptr_t raw){
	
	Data *nico;

	nico = reinterpret_cast<Data*>(raw);

	return (nico);
}

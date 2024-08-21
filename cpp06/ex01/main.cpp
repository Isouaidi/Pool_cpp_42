/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:35:03 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 21:23:26 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main (){
	Serializer instance;

	Data *obj1;

	Data *obj2;

	Data oui;

	obj1 = &oui;
	
	uintptr_t raw_obj1;
	 
	std::cout << "add_obj1 : " << obj1 << std::endl;

	raw_obj1 = instance.serialize(obj1);
	
	std::cout << "raw_obj1 : " << raw_obj1 << std::endl;

	std::cout << "add_obj2 : " << obj2 << std::endl;
	
	obj2 = instance.deserialize(raw_obj1);
	
	std::cout << "add_obj2_after : " << obj2 << std::endl;

	raw_obj1 = instance.serialize(obj2);

	std::cout << "raw_obj2 : " << raw_obj1 << std::endl;

	return 0;
}
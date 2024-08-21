/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:36:35 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/06 15:09:35 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Abc.hpp"

int main(){
	Base *random;
	
	random = generate();
	std ::cout << "TEST WITH &PTR" << std::endl;
	identify(*random);
	std::cout << "TEST WITH *PTR" << std::endl;
	identify(random);

	delete random;
}
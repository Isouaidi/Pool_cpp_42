/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:02:58 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/30 15:07:35 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"
#include<iostream>
#include<vector>

int main(){
	std::vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);

	// for (size_t i = 0; i < 4; i++)
	// 	std::cout << " "<< vec[i] << std::endl;
	
	// std::cout << std::endl;

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << "Found : " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}
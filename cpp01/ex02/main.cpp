/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:02:52 by isouaidi          #+#    #+#             */
/*   Updated: 2024/05/31 19:07:40 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std :: string  string = "HI THIS IS BRAIN";
	std :: string *stringPTR = &string; 
	std :: string &stringREF = string;

	std :: cout << "ad string : " << &string << std :: endl;
	std :: cout << "ad stringPTR : " << stringPTR << std :: endl;  
	std :: cout << "ad stringREF : " << &stringREF << std :: endl;  
	std :: cout << "val string : " << string << std :: endl;  
	std :: cout << "val stringPTR : " << *stringPTR << std :: endl;  
	std :: cout << "val stringREF : " << stringREF << std :: endl;  
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:49:30 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/14 17:11:57 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace(std :: string filename, std :: string s1, std :: string s2){
	std ::ifstream input(filename.c_str());
	if (!input){
	std::cerr << "cannot open input file " << std :: endl;
	return;
	}
	std ::ofstream output((filename + ".replace").c_str());
	if (!output){
	std::cerr << "cannot open output file " << filename << std :: endl;
	return;
	}
	
	std :: string line; 
	while (std :: getline(input, line))
	{
		 std::string result;
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			output << line.substr(0, pos);
			output << s2;
			pos += s1.length();
			line = line.substr(pos);
			pos = 0;
		}
		output << line << std::endl;
	}
}

int main(int ac, char **av){
	if (ac != 4)
		std :: cerr << "Enter 4 Args" << std :: endl;
	else
	{	
		std :: string filename = av[1]; 
		std :: string s1 = av[2]; 
		std :: string s2 = av[3];

		replace(filename, s1, s2); 
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:14:40 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/12 14:56:35 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(int ac, char **av)
{
	PhoneBook phoneBook;
	std :: string Command;

	(void)av;
	if (ac == 1)
	{
		while (1)
		{	
			if (std::cin.eof())
				exit (1);
			getline(std::cin, Command);
			if (Command == "ADD")
				phoneBook.addcontact();
			if (Command == "EXIT")
				break;
			if (Command == "SEARCH")
				phoneBook.searchcontact();	
		}
	}
	return(0);
}
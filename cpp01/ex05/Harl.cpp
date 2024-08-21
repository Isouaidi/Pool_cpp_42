/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:50:10 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/06 14:44:34 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std :: endl;
}
void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std :: endl;
}
void Harl::error()
{
	std::cout<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::warning()
{
	std::cout<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
	void (Harl::*fonction[4])(void) = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};

	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
		{
			(this->*fonction[i])();
			return;
		}
	}
}

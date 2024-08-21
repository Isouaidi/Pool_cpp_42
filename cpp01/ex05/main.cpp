/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:49:41 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/06 14:31:28 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("WARNING");
}
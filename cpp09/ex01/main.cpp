/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:14:52 by isouaidi          #+#    #+#             */
/*   Updated: 2024/08/05 15:14:53 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"
#include <iostream>

int main(int ac, char **av)
{
    RPN ilyes; 
    if (ac == 2)
        ilyes.CheckNumber(av[1]);
}
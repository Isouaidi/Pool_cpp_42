/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:14:35 by isouaidi          #+#    #+#             */
/*   Updated: 2024/08/05 15:14:36 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <cctype> 
#include <fstream>
#include <iterator>
#include <limits.h>

class RPN{
    private:
    std::stack<long> stack;

    public:

    RPN();
    RPN(const RPN &instance);
    RPN& operator=(const RPN &instance);
    ~RPN();

    void CheckNumber(char *av);
    
    void calcul(std::string av);
};

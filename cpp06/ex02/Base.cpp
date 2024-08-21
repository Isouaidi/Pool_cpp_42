/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 20:05:33 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/06 14:54:50 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Abc.hpp"

#include <cstdlib>
#include <ctime>

Base::~Base(){};

Base* generate(void){
	srand(time(0));
	int randNum = rand() % 3;
	
	switch(randNum){
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return(NULL);
	}
	
}


void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Bad type" << std::endl;
	}


void identify(Base& p){
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
		}
	catch(std::exception &e){
			e.what();
	}

	
	try {
		B& b= dynamic_cast<B&>((p));
		std::cout << "B" << std::endl;
		(void)b;
		}
	catch(std::exception &e){
			e.what();
	}

	
	try {
		C& c = dynamic_cast<C&>((p));
		std::cout << "C" << std::endl;
		(void)c;
		}
	catch(std::exception &e){
			e.what();
	}
}


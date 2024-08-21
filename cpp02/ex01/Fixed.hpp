/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:14:22 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/19 12:31:05 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int val;
	int const static fract = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &instance);
	Fixed& operator=(const Fixed &instance);
	~Fixed();
	
	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
    int toInt(void) const;
};

std ::ostream& operator<<(std::ostream &sortie, const Fixed &instance);

# endif
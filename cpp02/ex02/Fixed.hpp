/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:14:22 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/11 17:12:43 by isouaidi         ###   ########.fr       */
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

	bool	operator>(Fixed const &value) const;
	bool	operator<(Fixed const &value) const;
	bool	operator<=(Fixed const &value) const;
	bool	operator>=(Fixed const &value) const;
	bool	operator==(Fixed const &value) const;
	bool	operator!=(Fixed const &value) const;
	
	Fixed	operator+(Fixed const &value) const;
	Fixed	operator*(Fixed const &value) const;
	Fixed	operator-(Fixed const &value) const;
	Fixed	operator/(Fixed const &value) const;
	
	static Fixed const	&min(Fixed &a, Fixed &b);
	static Fixed const	&min(Fixed const &a, Fixed const &b);
	static Fixed const	&max(Fixed &a, Fixed &b);
	static Fixed const	&max(Fixed const &a, Fixed const &b);

	Fixed	&operator++();    // Pré-décrémentation
	Fixed	operator++(int);  // Post-incrémentation
	Fixed	&operator--();    // Pré-décrémentation
	Fixed	operator--(int);  // Post-incrémentation
};

std ::ostream& operator<<(std::ostream &sortie, const Fixed &instance);

# endif
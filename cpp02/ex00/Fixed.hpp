/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:14:22 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/10 15:59:46 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
private:
	int val;
	int const static fract;
public:
	Fixed();
	Fixed(const Fixed &instance);
	Fixed& operator=(const Fixed &instance);
	~Fixed();
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


# endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:12:17 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/11 18:44:12 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed(){
	std :: cout << "Default constructor called" << std :: endl;
}	

Fixed :: ~Fixed(){
	std :: cout << "Destructor called" << std :: endl;
}

int Fixed::getRawBits() const
{	
	std :: cout << "getRawBits member function called" << std :: endl;
	return(this->val);
}

void Fixed::setRawBits(int const raw)
{
	this->val = raw;
}


Fixed :: Fixed(const Fixed &instance){
	std :: cout << "Copy constructor called" << std :: endl;
	*this = instance;
}

Fixed& Fixed::operator=(const Fixed &instance){
	std :: cout << "Copy assignment operator called" << std :: endl;
	this->val = instance.val;
	return *this;
}



Fixed::Fixed(const int value ){
	std :: cout << "Int constructor called" << std :: endl;
	val = value << fract;
}

Fixed :: Fixed(const float value){
	std :: cout << "Float constructor called" << std :: endl;
	val = roundf(value * (1 << fract));
}

int Fixed::toInt(void) const {
    return (val >> fract);
}

float Fixed::toFloat(void) const {
    return ((float)val / (1 << fract));
}

std::ostream& operator<<(std::ostream &sortie, const Fixed &instance) {
    sortie << instance.toFloat();
    return (sortie);
}

bool	Fixed::operator>(Fixed const &value) const{
	return (val > value.val);
}

bool	Fixed::operator<(Fixed const &value) const{
	return (val < value.val);		
}

bool	Fixed::operator<=(Fixed const &value) const{
	return (val <= value.val);
		
}
bool	Fixed::operator>=(Fixed const &value) const{
	return(val >= value.val);
}
bool	Fixed::operator==(Fixed const &value) const{
	return(val == value.val);
}
bool	Fixed::operator!=(Fixed const &value) const{
	return(val != value.val);
}
	
Fixed	Fixed::operator+(Fixed const &value) const{
	return (Fixed(toFloat() + value.toFloat()));
}
Fixed	Fixed::operator*(Fixed const &value) const{
	return (Fixed(toFloat() * value.toFloat()));
}
Fixed	Fixed::operator-(Fixed const &value) const{
	return (Fixed(toFloat() - value.toFloat()));
}	
Fixed	Fixed::operator/(Fixed const &value) const{
	return (Fixed(toFloat() / value.toFloat()));
}

Fixed& Fixed::operator++() {
    ++(this->val);
    return *this;
}

Fixed& Fixed::operator--() {
    --(this->val);
    return *this;
}

Fixed	Fixed::operator++(int) {
    Fixed temp = *this;    // Crée une copie temporaire de l'objet
    ++(*this);             // Incrémente la valeur de l'objet actuel
    return temp;           // Retourne la copie temporaire avant l'incrémentation
}

Fixed	Fixed::operator--(int) {
    Fixed temp = *this;
    --(*this);            
    return temp;          
}

const Fixed	&Fixed::max(Fixed &a, Fixed &b){
	if (a < b)
		return (b);
	return (a);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b){
	if (a < b)
		return (b);
	return (a);
}

const Fixed	&Fixed::min(Fixed &a, Fixed &b){
	if (a > b)
		return (b);
	return (a);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b){
	if (a > b)
		return (b);
	return (a);
}
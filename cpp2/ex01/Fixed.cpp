/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 03:02:35 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/02 06:05:27 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int x)
{
    value = x << ftractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float y)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf(y * 256);
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout<< "Copy assignment operator called"<< std::endl;
    this->value = copy.value;
    return *this;
}

int Fixed::getRawBits( void ) const{
    std::cout<< "getRawBits member function called"<< std::endl;
    return value;
}

void Fixed::setRawBits( int const raw ){
    std::cout<< "setRawBits member function called"<< std::endl;
    value = raw;
}

Fixed::~Fixed(){
    std::cout<< "Destructor called"<< std::endl;
}

float Fixed::toFloat( void ) const
{
    float result = value / 256.0;
    return result;
}

int Fixed::toInt( void ) const
{
    int result = value >> 8;
    return result;
}

std::ostream & operator<< (std::ostream &out, const Fixed &c)
{
    out << c.toFloat();
    return out;
}
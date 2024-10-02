/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:09:32 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/02 06:05:38 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout<< "Copy assignment operator called"<< std::endl;
    this->value = copy.getRawBits();
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
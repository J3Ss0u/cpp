/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 05:15:15 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/02 06:04:44 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::Fixed(const int x)
{
    value = x << ftractionalBits;
}

Fixed::Fixed(const float y)
{
    value =  roundf(y * 256);
}

Fixed::Fixed(const Fixed& copy)
{
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    this->value = copy.value;
    return *this;
}

int Fixed::getRawBits( void ) const{
    return value;
}

void Fixed::setRawBits( int const raw ){
    value = raw;
}

Fixed::~Fixed(){
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

bool Fixed::operator>(const Fixed& rhs)
{
    return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed& rhs)
{
    return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed& rhs)
{
    return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed& rhs)
{
    return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed& rhs)
{
    return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed& rhs)
{
    return this->getRawBits() != rhs.getRawBits();
}


Fixed Fixed::operator+(const Fixed& copy)
{
    Fixed res;
    res.setRawBits(this->value + copy.value);
    return res;
}
Fixed Fixed::operator-(const Fixed& copy)
{
    Fixed res;
    res.setRawBits(this->value - copy.value);
    return res;
}
Fixed Fixed::operator*(const Fixed& copy)
{
    Fixed res(this->toFloat() * copy.toFloat());
    return res;
}
Fixed Fixed::operator/(const Fixed& copy)
{
    Fixed res(this->toFloat() / copy.toFloat());
    return res;
}

Fixed& Fixed::operator++()
{
    ++this->value;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed a(*this);
    this->value++;
    return a;
}

Fixed& Fixed::operator--()
{
    ++this->value;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed a(*this);
    this->value--;
    return a;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a < b)
        return b;
    return a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return b;
    return a;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 05:14:51 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/02 05:53:49 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string.h>
#include <iostream>



class Fixed{
    private:
        int value;
        static const int ftractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed& copy);
        Fixed(const int x);
        Fixed(const float y);
        Fixed& operator=(const Fixed& rhs);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        bool operator>(const Fixed& rhs);
        bool operator<(const Fixed& rhs);
        bool operator>=(const Fixed& rhs);
        bool operator<=(const Fixed& rhs);
        bool operator==(const Fixed& rhs);
        bool operator!=(const Fixed& rhs);
        Fixed operator+(const Fixed& rhs);
        Fixed operator-(const Fixed& rhs);
        Fixed operator*(const Fixed& rhs);
        Fixed operator/(const Fixed& rhs);
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        static Fixed& min(Fixed& a, Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream & operator<< (std::ostream &out, const Fixed &c);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:09:59 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/02 04:37:39 by sacharai         ###   ########.fr       */
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
        Fixed& operator=(const Fixed& copy);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream & operator<< (std::ostream &out, const Fixed &c);
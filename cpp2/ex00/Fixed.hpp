/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 00:38:28 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/02 06:05:51 by sacharai         ###   ########.fr       */
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
        Fixed& operator=(const Fixed& copy);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

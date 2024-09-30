/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:22:01 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/30 10:40:20 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HORDE_HPP
#define HORDE_HPP

#include <string.h>
#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        void announce( void );
        ~Zombie();
        void setName(const std::string& zombieName);
};

Zombie* zombieHorde( unsigned int N, std::string name );

#endif
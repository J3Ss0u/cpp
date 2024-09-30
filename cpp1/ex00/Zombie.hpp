/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:21:48 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/30 00:30:25 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string.h>
#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie(std::string name);
        void announce( void );
        ~Zombie();
};

Zombie* newZombie(std::string name);

void randomChump(std::string name);

#endif
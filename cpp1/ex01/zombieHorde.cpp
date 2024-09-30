/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:22:05 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/30 10:34:48 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( unsigned int N, std::string name ){


    Zombie* horde = new Zombie[N];
    for (unsigned int i = 0; i < N; i++) {   
        horde[i].setName(name);
    }
    return horde;
}
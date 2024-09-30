/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:21:55 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/30 10:34:41 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() : name("") {
    std::cout << "A nameless zombie has risen!" << std::endl;
}

Zombie::Zombie(std::string zombieName):name(zombieName){
}

void Zombie::setName(const std::string& zombieName){
            name = zombieName;
}

Zombie::~Zombie(){
    std::cout << "Zombie " << name << " destroyed" << std::endl;
}
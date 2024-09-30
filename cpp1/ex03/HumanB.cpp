/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:22:29 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/30 10:45:01 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string& name) : name(name), weapon(NULL) {

}

void HumanB::setWeapon(Weapon& w) {
    weapon = &w;
}

void HumanB::attack() const {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " has no weapon to attack with!" << std::endl;
    }
}
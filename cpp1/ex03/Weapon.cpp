/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:22:44 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/29 11:49:21 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& initialType) : type(initialType) {
    
}


const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string& newType) {
    type = newType;
}
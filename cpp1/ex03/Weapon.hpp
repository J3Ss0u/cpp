/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:22:50 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/29 11:50:47 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string.h>

class Weapon {
    private:
        std::string type;
    public:
        const std::string& getType() const;
        void setType(const std::string& newType);
        Weapon(const std::string& initialType);
};

#endif
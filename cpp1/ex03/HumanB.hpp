/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:22:31 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/29 12:06:53 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(const std::string& name);
        void setWeapon(Weapon& w);
        void attack() const;
};

#endif
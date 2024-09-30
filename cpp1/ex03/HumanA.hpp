/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:22:18 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/29 11:59:18 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon& weapon;
    public:
        HumanA(const std::string& name, Weapon& weapon);
        void attack() const; 
};

#endif
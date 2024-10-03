/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 23:06:48 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/03 23:09:27 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string.h>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
    public:
    FragTrap();
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap();
    
    FragTrap(std::string name);
    void attack(const std::string& target);
    void highFivesGuys(void);
};
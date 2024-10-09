/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:29:59 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/03 23:15:48 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : 
    Name("Default"), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other){
    *this = other;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : 
    Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
    std::cout << "ClapTrap parameter constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (EnergyPoints <= 0) {
        std::cout << "ClapTrap " << Name << " has no energy to attack!" << std::endl;
        return;
    }
    if (HitPoints <= 0) {
        std::cout << "ClapTrap " << Name << " is too damaged to attack!" << std::endl;
        return;
    }
    
    EnergyPoints--;
    std::cout << "ClapTrap " << Name << " attacks " << target 
              << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount >= this->HitPoints)
        this->HitPoints = 0;
    else
        this->HitPoints -= amount;
    std::cout << "ClapTrap " << Name << " takes " << amount 
              << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (EnergyPoints <= 0) {
        std::cout << "ClapTrap " << Name << " has no energy to repair!" << std::endl;
        return;
    }
    if (HitPoints <= 0) {
        std::cout << "ClapTrap " << Name << " is too damaged to repair!" << std::endl;
        return;
    }
    
    EnergyPoints--;
    HitPoints += amount;
    std::cout << "ClapTrap " << Name << " repairs itself for " 
              << amount << " points!" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:00:49 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/03 23:22:56 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    Name = "DefaultScavTrap";
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20; 
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    *this = other;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
    this->Name = name;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20; 
    std::cout << "ScavTrap parameter constructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (EnergyPoints <= 0) {
        std::cout << "ScavTrap " << Name << " has no energy to attack!" << std::endl;
        return;
    }
    if (HitPoints <= 0) {
        std::cout << "ScavTrap " << Name << " is too damaged to attack!" << std::endl;
        return;
    }
    
    EnergyPoints--;
    std::cout << "ScavTrap " << Name << " attacks " << target 
              << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
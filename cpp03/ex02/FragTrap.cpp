/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 23:06:51 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/03 23:26:44 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    Name = "DefaultFragTrap";
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30; 
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
    *this = other;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name){
    this->Name = name;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30; 
    std::cout << "FragTrap parameter constructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (EnergyPoints <= 0) {
        std::cout << "FragTrap " << Name << " has no energy to attack!" << std::endl;
        return;
    }
    if (HitPoints <= 0) {
        std::cout << "FragTrap " << Name << " is too damaged to attack!" << std::endl;
        return;
    }
    
    EnergyPoints--;
    std::cout << "FragTrap " << Name << " attacks " << target 
              << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap is requesting a positive high five" << std::endl;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:30:01 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/03 23:39:11 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {

    ScavTrap robot("JESSOU");

    robot.attack("TARGET");
    robot.takeDamage(10);
    robot.beRepaired(5);
    robot.guardGate();
    return 0;
}




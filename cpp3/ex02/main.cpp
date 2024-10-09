/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 23:29:40 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/03 23:39:04 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {

    FragTrap robot("JESSOU");

    robot.attack("TARGET");
    robot.takeDamage(10);
    robot.beRepaired(5);
    robot.highFivesGuys();
    return 0;
}



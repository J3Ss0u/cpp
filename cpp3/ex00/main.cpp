/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:30:01 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/03 23:39:22 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap robot("JESSOU");

    robot.attack("TARGET");
    robot.takeDamage(9);
    robot.beRepaired(1);
    return 0;
}





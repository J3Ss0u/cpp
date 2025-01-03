/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:21:31 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/30 10:23:31 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie  name = Zombie("Foo");
    name.announce();
    Zombie *ptr = newZombie("newZombie");
    ptr->announce();
    randomChump("randomChump");
    delete ptr;
}

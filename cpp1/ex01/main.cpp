/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:21:52 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/30 10:30:12 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    int N = 2;
    std::string name = "jessou";
    Zombie *ptr = zombieHorde(N, name);

    for (int i = 0; i < N; i++){
        std::cout << "Zombie " << i << " says: ";
         ptr[i].announce();
    }
    delete[] ptr;
}
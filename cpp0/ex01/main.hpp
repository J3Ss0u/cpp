/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:09:17 by sacharai          #+#    #+#             */
/*   Updated: 2024/08/29 11:18:09 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <string.h>
#include <iostream>
#include <cctype>
#include <iomanip>

class Contact {
public:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string darckestSecret;
    std::string phoneNumber;

};

class PhoneBook {
public:
    Contact contacts[8];
};

#endif
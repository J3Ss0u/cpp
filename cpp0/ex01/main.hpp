/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:09:17 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/09 11:28:04 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <string.h>
#include <iostream>
#include <cctype>
#include <iomanip>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string darckestSecret;
    std::string phoneNumber;
public:
    std::string getFirst();
    void setFirst(std::string& First);
    std::string getLast();
    void setLast(std::string& Last);
    std::string getNick();
    void setNick(std::string& Last);
    std::string getNick();
    void setNick(std::string& Nick);
    std::string getSecret();
    void setSecret(std::string& Secret);
    std::string getPhone();
    void setPhone(std::string& Phone);
};

class PhoneBook {
public:
    Contact contacts[8];
};

#endif
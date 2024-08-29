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
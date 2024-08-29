/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:43:34 by sacharai          #+#    #+#             */
/*   Updated: 2024/08/29 10:14:28 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool isPhoneNumberValid(std::string phoneNumber) {
    for (size_t i = 0; i < phoneNumber.length(); ++i) {
        if (!isdigit(phoneNumber[i])) {
            return false;
        }
    }
    return true;
}

std::string truncateWord(std::string word, size_t length) {
    return word.substr(0, length);
}

int main() {
    int i = 0;
    int k = 0;
    std::string command;
    PhoneBook phoneBook;


    while (true) {
        std::cout << "Enter your command: ";
        std::getline(std::cin, command);
        if (std::cin.eof()) {
                    std::cout << "\nEnd of input detected (Ctrl+D was pressed)." << std::endl;
                    std::cin.clear(); 
                    return 1; 
                }
        if (command == "EXIT") {
            std::cout << "Exiting..." << std::endl;
            break;
        } else if (command == "ADD") {
            while (i%8 < 8) {
//------------------------- firstName ------------------------
                std::cout << "Enter the first name of contact " << i%8 << ": ";
                std::getline(std::cin, phoneBook.contacts[i%8].firstName);
                if (std::cin.eof()) {
                    std::cout << "\nEnd of input detected (Ctrl+D was pressed)." << std::endl;
                    std::cin.clear(); 
                    return 1; 
                }
                if (phoneBook.contacts[i%8].firstName.empty()) {
                    std::cout << "The first name can't be empty." << std::endl;
                    continue;
                } else
                    std::cout << "First name entered: " << phoneBook.contacts[i%8].firstName << std::endl;
//------------------------- lastName ------------------------
                std::cout << "Enter the last name of contact " << i%8 << ": ";

                std::getline(std::cin, phoneBook.contacts[i%8].lastName);
                if (std::cin.eof()) {
                    std::cout << "\nEnd of input detected (Ctrl+D was pressed)." << std::endl;
                    std::cin.clear(); 
                    return 1; 
                }
                if (phoneBook.contacts[i%8].lastName.empty()) {
                    std::cout << "The last name can't be empty." << std::endl;
                    continue;
                } else
                    std::cout << "Last name entered: " << phoneBook.contacts[i%8].lastName << std::endl;
//------------------------- nickName -------------------------
                std::cout << "Enter the nickname of contact " << i%8 << ": ";
                std::getline(std::cin, phoneBook.contacts[i%8].nickName);
                if (std::cin.eof()) {
                    std::cout << "\nEnd of input detected (Ctrl+D was pressed)." << std::endl;
                    std::cin.clear(); 
                    return 1; 
                }
                if (phoneBook.contacts[i%8].nickName.empty()) {
                    std::cout << "The nickname can't be empty." << std::endl;
                    continue;
                } else
                    std::cout << "Nickname entered: " << phoneBook.contacts[i%8].nickName << std::endl;
//-------------------------- PhoneNumber -----------------------
                std::cout << "Enter the phone number of contact " << i%8 << ": ";
                std::getline(std::cin, phoneBook.contacts[i%8].phoneNumber);
                if (std::cin.eof()) {
                    std::cout << "\nEnd of input detected (Ctrl+D was pressed)." << std::endl;
                    std::cin.clear(); 
                    return 1; 
                }
                if (!isPhoneNumberValid(phoneBook.contacts[i%8].phoneNumber)) {
                    std::cout << "Invalid phone number. Please enter digits only." << std::endl;
                    continue;
                }
                if (phoneBook.contacts[i%8].phoneNumber.empty()) {
                    std::cout << "The phone number can't be empty." << std::endl;
                    continue;
                } else
                    std::cout << "Phone number entered: " << phoneBook.contacts[i%8].phoneNumber << std::endl;
//-------------------------- darkest secret ------------------------
                std::cout << "Enter the darkest secret of contact " << i%8 << ": ";
                std::getline(std::cin, phoneBook.contacts[i%8].darckestSecret);
                if (std::cin.eof()) {
                    std::cout << "\nEnd of input detected (Ctrl+D was pressed)." << std::endl;
                    std::cin.clear();
                    return 1; 
                }
                if (phoneBook.contacts[i%8].darckestSecret.empty()) {
                    std::cout << "The darkest secret can't be empty." << std::endl;
                    continue;
                } else
                    std::cout << "Darkest secret entered: " << phoneBook.contacts[i%8].darckestSecret << std::endl;
                i++;
                break;
            }
        }
        else if (command == "SEARCH") {
            std::cout << std::setw(2);
            for (int j = 0 ; j < 43; j++) {
                std::cout << "-";
            }
            std::cout << std::endl;
            std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
            std::cout << "|";
            std::cout << std::setw(1);
            for (int j = 0 ; j < 43; j++) {
                std::cout << "-";
            }
            std::cout << "|" << std::endl;
            k = 0;
            while ( k < 8 && !phoneBook.contacts[k].firstName.empty())
            {
                std::cout << "|";
                std::cout << std::setw(10) << k << "|";
                if (phoneBook.contacts[k].firstName.length() > 10)
                    std::cout << truncateWord(phoneBook.contacts[k].firstName, 9) << ".";
                else
                        std::cout << std::setw(10) << phoneBook.contacts[k].firstName;
                std::cout << "|";
                if (phoneBook.contacts[k].lastName.length() > 10)
                    std::cout << truncateWord(phoneBook.contacts[k].lastName, 9) << ".";
                else
                        std::cout << std::setw(10) << phoneBook.contacts[k].lastName;
                std::cout << "|";
                if (phoneBook.contacts[k].nickName.length() > 10)
                    std::cout << truncateWord(phoneBook.contacts[k].nickName, 9) << ".";
                else
                        std::cout << std::setw(10) << phoneBook.contacts[k].nickName;
                std::cout << "|" << std::endl;
                std::cout << "|";
                for (int j = 1 ; j < 44; j++) {
                    std::cout << "-";
                }
                std::cout << "|" << std::endl;
                k++;
            }
        }
        else {
            std::cout << "Unknown command..." << std::endl;
            continue;;
        }
    }
    return 0;
}



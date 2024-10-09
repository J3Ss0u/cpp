/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:43:34 by sacharai          #+#    #+#             */
/*   Updated: 2024/10/09 11:34:20 by sacharai         ###   ########.fr       */
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

std::string Contact::getFirst(){
    return firstName;
}

void Contact::setFirst(std::string& First){
    firstName = First;
}

std::string Contact::getLast(){
    return lastName;
}

void Contact::setLast(std::string& Last){
    lastName = Last;
}

std::string Contact::getNick(){
    return nickName;
}

void Contact::setNick(std::string& Nick){
    lastName = Nick;
}

std::string Contact::getSecret(){
    return darckestSecret;
}

void Contact::setNick(std::string& Secret){
    darckestSecret = Secret;
}


std::string Contact::getPhone(){
    return phoneNumber;
}

void Contact::setPhone(std::string& Phone){
    phoneNumber = Phone;
}

int main() {
    int i = 0;
    int k = 0;
    std::string command;
    PhoneBook phoneBook;
    std::string tempFirst;
    std::string tempLast;
    std::string tempNick;
    std::string tempSecret;
    std::string tempPhone;

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
                
                std::getline(std::cin, tempFirst);
                phoneBook.contacts[i%8].setFirst(tempFirst);
                if (std::cin.eof()) {
                    std::cout << "\nEnd of input detected (Ctrl+D was pressed)." << std::endl;
                    std::cin.clear(); 
                    return 1; 
                }
                if (phoneBook.contacts[i%8].getFirst().empty()) {
                    std::cout << "The first name can't be empty." << std::endl;
                    continue;
                } else
                    std::cout << "First name entered: " << phoneBook.contacts[i%8].getFirst() << std::endl;
//------------------------- lastName ------------------------
                std::cout << "Enter the last name of contact " << i%8 << ": ";
                std::getline(std::cin, tempLast);
                phoneBook.contacts[i%8].setLast(tempLast);
                if (std::cin.eof()) {
                    std::cout << "\nEnd of input detected (Ctrl+D was pressed)." << std::endl;
                    std::cin.clear(); 
                    return 1; 
                }
                if (phoneBook.contacts[i%8].getLast().empty()) {
                    std::cout << "The last name can't be empty." << std::endl;
                    continue;
                } else
                    std::cout << "Last name entered: " << phoneBook.contacts[i%8].getLast() << std::endl;
//------------------------- nickName -------------------------
                std::cout << "Enter the nickname of contact " << i%8 << ": ";
                std::getline(std::cin, tempNick);
                phoneBook.contacts[i%8].setNick(tempNick);
                if (std::cin.eof()) {
                    std::cout << "\nEnd of input detected (Ctrl+D was pressed)." << std::endl;
                    std::cin.clear(); 
                    return 1; 
                }
                if (phoneBook.contacts[i%8].getNick().empty()) {
                    std::cout << "The nickname can't be empty." << std::endl;
                    continue;
                } else
                    std::cout << "Nickname entered: " << phoneBook.contacts[i%8].getNick() << std::endl;
//-------------------------- PhoneNumber -----------------------
                std::cout << "Enter the phone number of contact " << i%8 << ": ";
                std::getline(std::cin, tempPhone);
                phoneBook.contacts[i%8].setPhone(tempPhone);
                if (std::cin.eof()) {
                    std::cout << "\nEnd of input detected (Ctrl+D was pressed)." << std::endl;
                    std::cin.clear(); 
                    return 1; 
                }
                if (!isPhoneNumberValid(phoneBook.contacts[i%8].getPhone())) {
                    std::cout << "Invalid phone number. Please enter digits only." << std::endl;
                    continue;
                }
                if (phoneBook.contacts[i%8].getPhone().empty()) {
                    std::cout << "The phone number can't be empty." << std::endl;
                    continue;
                } else
                    std::cout << "Phone number entered: " << phoneBook.contacts[i%8].getPhone() << std::endl;
//-------------------------- darkest secret ------------------------
                std::cout << "Enter the darkest secret of contact " << i%8 << ": ";
                std::getline(std::cin, tempSecret);
                phoneBook.contacts[i%8].setSecret(tempSecret);
                if (std::cin.eof()) {
                    std::cout << "\nEnd of input detected (Ctrl+D was pressed)." << std::endl;
                    std::cin.clear();
                    return 1; 
                }
                if (phoneBook.contacts[i%8].getSecret().empty()) {
                    std::cout << "The darkest secret can't be empty." << std::endl;
                    continue;
                } else
                    std::cout << "Darkest secret entered: " << phoneBook.contacts[i%8].getSecret() << std::endl;
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
            while ( k < 8 && !phoneBook.contacts[k].getFirst().empty())
            {
                std::cout << "|";
                std::cout << std::setw(10) << k << "|";
                if (phoneBook.contacts[k].getFirst().length() > 10)
                    std::cout << truncateWord(phoneBook.contacts[k].getFirst(), 9) << ".";
                else
                        std::cout << std::setw(10) << phoneBook.contacts[k].getFirst();
                std::cout << "|";
                if (phoneBook.contacts[k].getLast().length() > 10)
                    std::cout << truncateWord(phoneBook.contacts[k].getLast(), 9) << ".";
                else
                        std::cout << std::setw(10) << phoneBook.contacts[k].getLast();
                std::cout << "|";
                if (phoneBook.contacts[k].getNick().length() > 10)
                    std::cout << truncateWord(phoneBook.contacts[k].getNick(), 9) << ".";
                else
                        std::cout << std::setw(10) << phoneBook.contacts[k].getNick();
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



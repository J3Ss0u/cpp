/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 00:22:48 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/30 11:03:43 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myReplace.hpp"

int main(int argc, char* argv[]) {
    if (argc != 4){
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>." << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inFile(filename);
    if(!inFile.is_open()) {
        std::cerr << "Error: Unable to open " << argv[1] << std::endl;
        return 1;
    }
    std::string content;
    std::string line;
    while (getline(inFile, line))
    {
        content += line + "\n";
    }
    inFile.close();
    std::string result;
    if (s1.length() == 0)
        result = content;
    else{
     result = myReplace(content,s1,s2);
    }
    std::ofstream outFile;
    outFile.open(filename + ".replace");
    if(!outFile.is_open()) {
        std::cerr << "Error: Unable to open " << argv[1] << ".replace" << std::endl;
        return 1;
    }

    outFile << result;
    outFile.close();
    return 0;
}
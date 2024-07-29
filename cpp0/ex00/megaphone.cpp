/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 01:23:53 by sacharai          #+#    #+#             */
/*   Updated: 2024/07/29 10:32:51 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string arg(argv[i]);
            std::transform(arg.begin(), arg.end(), arg.begin(), ::toupper);
            std::cout << arg;
            if (i < argc - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
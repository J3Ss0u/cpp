/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 01:23:53 by sacharai          #+#    #+#             */
/*   Updated: 2024/08/22 12:03:01 by sacharai         ###   ########.fr       */
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
            int j = 0;
            char *c = &arg[j];
            while (*c != '\0')
            {
                *c = std::toupper(*c);
                std::cout << *c;
                c++;
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
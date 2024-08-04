/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 01:23:53 by sacharai          #+#    #+#             */
/*   Updated: 2024/08/04 14:59:34 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <cctype>
// class Player
// {
//     public:
//         int x,y;  
//         int speed;
//         void Move(int xa, int ya)
//         {
//             x += xa * speed;
//             y += ya * speed;
//         }

// };



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
            while(arg[j] != '\0' && ((arg[j] >= 9 && arg[j] <= 13) || arg[j] == 32))
                j++;
            char *c = &arg[j];
            while (*c != '\0')
            {
                *c = std::toupper(*c);
                if (*c == ' ')
                {
                    c++;
                    if (*c == '\0')
                        break;
                    else
                        c--;
                }
                std::cout << *c;
                c++;
            }
            // std::cout << arg;
            if (i < argc - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
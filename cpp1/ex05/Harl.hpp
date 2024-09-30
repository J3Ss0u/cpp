/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 00:33:42 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/30 14:41:44 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
    typedef void (Harl::*ComplaintPtr)(void);
    ComplaintPtr complaintFunctions[4];
    std::string levels[4];

public:
    Harl();
    void complain(std::string level);
};

#endif
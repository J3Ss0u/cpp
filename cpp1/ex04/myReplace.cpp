/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myReplace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacharai <sacharai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 00:23:02 by sacharai          #+#    #+#             */
/*   Updated: 2024/09/30 00:23:45 by sacharai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myReplace.hpp"

std::string myReplace(const std::string& str, const std::string& s1, const std::string& s2) {
    std::string result;
    size_t start_pos = 0;
    size_t found_pos;

    while ((found_pos = str.find(s1, start_pos)) != std::string::npos) {
        result.append(str, start_pos, found_pos - start_pos);
        result.append(s2);
        start_pos = found_pos + s1.length();
    }
    result.append(str, start_pos, str.length() - start_pos);

    return result;
}
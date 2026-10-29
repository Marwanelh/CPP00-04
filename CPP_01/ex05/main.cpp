/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:05:23 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:05:24 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;

    std::cout << "=== Testing DEBUG ===" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "=== Testing INFO ===" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    std::cout << "=== Testing WARNING ===" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    std::cout << "=== Testing ERROR ===" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    std::cout << "=== Testing Invalid Level ===" << std::endl;
    harl.complain("SOMETHING_ELSE");

    return 0;
}
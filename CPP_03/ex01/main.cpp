/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:22:35 by mael-hou          #+#    #+#             */
/*   Updated: 2026/09/17 17:24:34 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    ClapTrap demon;
    ClapTrap angel("Angel");
    ScavTrap scav;
    ScavTrap assign;
    
    std::cout << std::endl;
    std::cout << "ClapTrap performing" << std::endl;
    demon.attack("Air");
    demon.takeDamage(5);
    demon.takeDamage(4);
    demon.beRepaired(2);
    angel.attack("Ground");
    std::cout << std::endl;

    std::cout << "ScavTrap performing" << std::endl;
    scav.attack("Water");
    scav.takeDamage(30);
    scav.beRepaired(10);
    ScavTrap trap("Nelon");
    // NEW object: copy construction, despite the equals sign.
    ScavTrap copy = scav;
    // Existing object: copy assignment.
    assign = scav;
    trap.attack("Fire");
    trap.takeDamage(50);
    trap.guardGate();
    scav.attack("Watermellown");
    scav.takeDamage(50);
    scav.guardGate();
    assign.attack("Snowman");
    assign.takeDamage(50);
    return (0);
}

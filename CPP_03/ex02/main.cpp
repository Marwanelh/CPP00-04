/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:23:48 by mael-hou          #+#    #+#             */
/*   Updated: 2026/09/17 17:24:34 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    ClapTrap demon;
    ClapTrap angel("Angel");
    FragTrap frag;
    FragTrap trap("Frog");
    FragTrap super;
    
    std::cout << std::endl;
    std::cout << "ClapTrap performing" << std::endl;
    demon.attack("Air");
    demon.takeDamage(5);
    demon.takeDamage(4);
    demon.beRepaired(2);
    angel.attack("Ground");
    std::cout << std::endl;
    std::cout << std::endl << "FragTrap performing" << std::endl;
    trap.attack("butterfly");
    frag.takeDamage(50);
    frag.takeDamage(50);
    // Edge case: frag has zero HP, so this repair should fail.
    frag.beRepaired(40);
    super = trap;
    super.HighFivesGuys();
    // Prints an attack only; the next line separately applies damage.
    super.attack(frag.getName());
    frag.takeDamage(30);
    trap.HighFivesGuys();

    std::cout << std::endl;
    return (0);
}

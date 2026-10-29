/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:22:16 by mael-hou          #+#    #+#             */
/*   Updated: 2026/09/17 17:24:34 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap demon;
    ClapTrap angel("Angel");

    // Trace HP/energy: 10/10 -> 10/9 -> 5/9 -> 1/9 -> 3/8.
    demon.attack("Air");
    demon.takeDamage(5);
    demon.takeDamage(4);
    demon.beRepaired(2);
    angel.attack("Ground");
    return (0);
}

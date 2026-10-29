/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:04:30 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:04:32 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    // Test Heap Zombie (created with new, must call delete)
    std::cout << "--- Heap Zombie Test ---" << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie; // Manually triggering destructor

    std::cout << std::endl;

    // Test Stack Zombie (created locally, destroyed when function returns)
    std::cout << "--- Stack Zombie Test ---" << std::endl;
    randomChump("StackZombie");

    return 0;
}
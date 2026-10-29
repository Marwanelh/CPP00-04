/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:04:48 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/29 21:04:49 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N = 5;

    std::cout << "--- Creating Zombie Horde of size " << N << " ---" << std::endl;
    Zombie* horde = zombieHorde(N, "HordeZombie");

    if (horde)
    {
        for (int i = 0; i < N; i++)
        {
            std::cout << "[" << i << "] ";
            horde[i].announce();
        }

        std::cout << "\n--- Deallocating Zombie Horde ---" << std::endl;
        // Must use delete[] because horde was allocated with new[]
        delete[] horde;
    }

    return 0;
}
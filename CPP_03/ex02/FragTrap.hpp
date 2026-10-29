/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:23:05 by mael-hou          #+#    #+#             */
/*   Updated: 2026/09/17 17:24:34 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

// FragTrap and ScavTrap are siblings: both directly derive from ClapTrap.
class FragTrap : public ClapTrap {
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        FragTrap& operator=(const FragTrap &other);
        ~FragTrap(void);

        // TODO evaluation: subject requires lowercase highFivesGuys(void).
        void HighFivesGuys(void);
        std::string getName(void);
};

#endif

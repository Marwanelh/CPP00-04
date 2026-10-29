/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:53:54 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/28 18:53:56 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {
    public:
        std::string ideas[100];

    public:
        Brain(void);
        Brain(const Brain &copy);
        Brain& operator=(const Brain &copy);
        ~Brain(void);
};

#endif
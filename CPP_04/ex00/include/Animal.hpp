/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:52:56 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/28 18:52:58 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
    protected:
        std::string type;
        void setType(std::string const &_type);
    
    public:
        Animal(void);
        Animal(const Animal &copy);
        Animal& operator=(const Animal &copy);
        virtual ~Animal(void);

        virtual void makeSound(void) const;
        std::string getType(void) const;


};

#endif
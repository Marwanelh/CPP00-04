/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:54:01 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/28 18:54:02 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp" 
# include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain* brain;
    public:
        Dog(void);
        Dog(const Dog &copy);
        Dog& operator=(const Dog &copy);
        virtual ~Dog(void);

        virtual void makeSound(void) const;
        Brain* getBrain(void) const;
};

#endif
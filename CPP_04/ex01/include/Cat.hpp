/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:53:58 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/28 18:53:59 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain* brain;

    public:
        Cat(void);
        Cat(const Cat &copy);
        Cat& operator=(const Cat &copy);
        virtual ~Cat(void);

        virtual void makeSound(void) const;
        Brain* getBrain(void) const;
};

#endif
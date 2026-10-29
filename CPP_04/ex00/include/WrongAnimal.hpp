/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:53:13 by mael-hou          #+#    #+#             */
/*   Updated: 2026/10/28 18:53:15 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal {
    protected:
        std::string type;
        void setType(const std::string &_type);
    
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal& operator=(const WrongAnimal &copy);
        virtual ~WrongAnimal(void);

        void makeSound(void) const;
        std::string getType(void) const;
};

#endif
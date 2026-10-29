/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 21:27:29 by mael-hou          #+#    #+#             */
/*   Updated: 2026/07/29 21:27:30 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
    private:
        int count;
        int oldest;
    public:
        Contact contacts[8];
        PhoneBook();
        ~PhoneBook();

        void    add_contact(void);
        void    search_contact(void);

        int     getCount(void);
};

#endif
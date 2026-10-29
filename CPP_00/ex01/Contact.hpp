/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 21:27:18 by mael-hou          #+#    #+#             */
/*   Updated: 2026/07/29 21:27:19 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
    private:
        std::string First_Name;
        std::string Last_Name;
        std::string Nickname;
        std::string Phone_Number;
        std::string Darkest_Secret;
    public:
        Contact(void);
        ~Contact(void);
        Contact(std::string first_name, std::string last_name, std::string nickname, \
            std::string phone_number, std::string darkest_secret);

        std::string getFirst_Name() const;
        std::string getLast_Name() const;
        std::string getNickname() const;
        std::string getPhone_Number() const;
        std::string getDarkest_Secret() const;
};

#endif
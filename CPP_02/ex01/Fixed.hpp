/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-hou <mael-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 20:19:48 by mael-hou          #+#    #+#             */
/*   Updated: 2026/08/25 20:22:49 by mael-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int _fp_value;
        static const int _fractional_bits;

    public:
        Fixed(void);
        Fixed(const int n);
        Fixed(const float f);
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, Fixed const &fix);

#endif
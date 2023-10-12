/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:29:01 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/21 12:29:46 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
        private :
            int  fixed_point;
            const static int fractional_part = 8;
        public :
            Fixed();
            Fixed(const Fixed &obj);
            Fixed &operator =(Fixed &obj);
            int getRawBits(void) const;
            void setRawBits(int const raw);
            ~Fixed();
};

#endif
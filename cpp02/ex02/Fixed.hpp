/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:29:35 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/21 12:30:27 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed
{
        private :
            int  fixed_point;
            const static  int fractional_part = 8;
        public :
            Fixed();
            Fixed(const Fixed &obj);
            Fixed(const int num);
            Fixed(const float floating);
            Fixed &operator =(const Fixed &obj);
            int getRawBits(void) const;
            void setRawBits(int const raw);
            float toFloat( void ) const;
            int toInt( void ) const;
            

            bool operator==(const Fixed& b) const;
            bool operator!=(const Fixed& b) const;
            bool operator <(const Fixed& b) const;
            bool operator >(const Fixed& b) const;
            bool operator<=(const Fixed& b) const;
            bool operator>=(const Fixed& b) const;


            Fixed  operator+(const Fixed &b)const;
            Fixed  operator-(const Fixed &b)const;
            Fixed  operator/(const Fixed &b)const;
            Fixed  operator*(const Fixed &b)const;
            

            Fixed  operator++(int);
            Fixed  &operator++();
            Fixed  operator--(int);
            Fixed  &operator--();
            
            static Fixed & min( Fixed &a , Fixed &b);
            const static Fixed & min(const Fixed &a ,const Fixed &b);
            static Fixed & max(  Fixed &a ,  Fixed &b);
            const static Fixed & max( const Fixed &a , const Fixed &b);
            ~Fixed();
};

std :: ostream& operator <<(std :: ostream& mycout, const Fixed &obj);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:42:54 by junoh             #+#    #+#             */
/*   Updated: 2022/11/21 14:38:31 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed{
    
    private : 
        int fixed_value_;
        static const int fractionBitNum_;
    public :
        Fixed();
        Fixed& operator=(const Fixed& other);    
        Fixed(const Fixed& copy);
        Fixed(int const i);
        Fixed(float const f );
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(const int raw);
    
        int toInt(void) const;
        float toFloat(void) const;
        
        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;

        Fixed operator+(const Fixed& other) const;
        Fixed operator-(const Fixed& other) const;
        Fixed operator*(const Fixed& other) const;
        Fixed operator/(const Fixed& other) const;
        
        Fixed& operator++();
        Fixed operator++(int dumy);
        Fixed& operator--();
        Fixed operator--(int dumy);

        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
};
    std::ostream& operator<<(std::ostream& os, const Fixed& value);

#endif
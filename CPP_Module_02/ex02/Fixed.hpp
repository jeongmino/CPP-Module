/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:42:54 by junoh             #+#    #+#             */
/*   Updated: 2022/11/13 23:54:19 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{
    
    private : 
        const int fixed_value_;
        const int fractionBitNum_;
    public :
        Fixed();    
        Fixed(Fixed& const copy);
        Fixed(int const i);
        Fixed(float const f );
        ~Fixed();

        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;

        Fixed& operator+(const Fixed& other);
        Fixed& operator-(const Fixed& other);
        Fixed& operator*(const Fixed& other);
        Fixed& operator/(const Fixed& other);
        
        Fixed& operator++();
        Fixed& operator++(int);
        Fixed& operator--();
        Fixed& operator--(int);

        int getRawBits(void) const;
        void setRawBits(int const raw) const;
    
        int toInt(void) const;
        float toFloat(void) const;

        // static Fixed const 
};
    std::ostream& operator<<(std::ostream& os, Fixed& value);
    

#endif
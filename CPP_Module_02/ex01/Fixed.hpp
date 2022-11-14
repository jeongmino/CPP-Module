/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:25:08 by junoh             #+#    #+#             */
/*   Updated: 2022/11/13 23:47:53 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    
    private :
        int                 fixed_point_;              
        static const int    fractionBitNum_;

    public :
        Fixed(void);
        Fixed(int const i);
        Fixed(float const f);
        Fixed(Fixed& const copy);
        Fixed& operator=(Fixed& const src);
        ~Fixed();

        int getRawBits(void) const;
        int getFractionBitNum(void) const;
        void setRawBits(const int raw);

        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream    &operator<<(std::ostream& os, Fixed const &fixed);

#endif
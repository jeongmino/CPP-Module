/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:25:08 by junoh             #+#    #+#             */
/*   Updated: 2022/11/21 13:32:00 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
    
    private :
        int                 fixed_point_;              
        static const int    fractionBitNum_ = 8;

    public :
        Fixed(void);
        Fixed(const Fixed& copy);
        Fixed& operator=(const Fixed& src);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(const int raw);
};

#endif
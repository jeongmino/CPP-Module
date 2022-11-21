/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:30:47 by junoh             #+#    #+#             */
/*   Updated: 2022/11/21 13:40:56 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
    : fixed_point_(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) : fixed_point_(copy.getRawBits())
{
    std::cout << "Copy constructor called" << std::endl;
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point_ = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point_);
}

Fixed& Fixed::operator=(const Fixed& src)
{
    std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &src)
        this->fixed_point_ = src.getRawBits();
    return (*this);            
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}
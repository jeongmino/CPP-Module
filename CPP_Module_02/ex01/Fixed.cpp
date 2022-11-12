/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:30:47 by junoh             #+#    #+#             */
/*   Updated: 2022/11/12 18:04:29 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
    : fixed_point_(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point_ = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point_;
}

int Fixed::getFractionBitNum(void) const
{
    return fractionBitNum_;
}

Fixed& Fixed::operator=(const Fixed& src)
{
    std::cout << "Copy Assignation operator called" << std::endl;
    if (this != &src)
        this->fixed_point_ = src.getRawBits();
    return *this;            
}

int Fixed::toInt(const float& f)
{
    this->setRawBits(this->getRawBits() << this->getFractionBitNum());
    return this->getRawBits();
}

float Fixed::toFloat(const int& i)
{
    return static_cast<float>(this->fixed_point_) / (1 << this->getFractionBitNum());
}

Fixed& Fixed::operator<<()

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}
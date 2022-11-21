/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:30:47 by junoh             #+#    #+#             */
/*   Updated: 2022/11/21 14:20:31 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionBitNum_ = 8;

Fixed::Fixed(void)
    : fixed_point_(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const i)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point_ = i << this->getFractionBitNum();
}

Fixed::Fixed(float const f)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point_ = roundf(f * (1 << Fixed::fractionBitNum_));
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

void Fixed::setRawBits(const int raw)
{
    this->fixed_point_ = raw;
}

int Fixed::getRawBits(void) const
{
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

int Fixed::toInt(void) const
{
    return this->fixed_point_ >> Fixed::fractionBitNum_;
}

float Fixed::toFloat(void) const
{
    return (float)(this->fixed_point_) / (1 << Fixed::fractionBitNum_);
}

std::ostream &operator<<(std::ostream& os, Fixed const &fixed)
{
    os << fixed.toFloat();
    return os;
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}
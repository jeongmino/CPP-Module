/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:24:00 by junoh             #+#    #+#             */
/*   Updated: 2022/11/14 18:41:14 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionBitNum_ = 8; 

Fixed::Fixed()
    : fixed_value_(0)
{   
}

Fixed::Fixed(Fixed& const copy)
{
    *this = copy;    
}

Fixed::Fixed(int const i)
{
    this->fixed_value_ = i << Fixed::fractionBitNum_;
}

Fixed::Fixed(float const f)
{
    this->fixed_value_ = roundf(f * (1 << fractionBitNum_));    
}

Fixed::~Fixed()
{
}

void Fixed::setRawBits(const int raw)
{
    this->fixed_value_ = raw;
}

int Fixed::getRawBits(void) const
{
    return this->fixed_value_;        
}

int Fixed::toInt(void) const
{
    return this->fixed_value_ >> Fixed::fractionBitNum_;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->getRawBits()) / static_cast<float>(1 << Fixed::fractionBitNum_);
}

bool Fixed::operator>(const Fixed& other) const
{
    return (this->getRawBits() > other.getRawBits());    
}

bool Fixed::operator<(const Fixed& other) const
{
    return (this->getRawBits() < other.getRawBits());    
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (this->getRawBits() >= other.getRawBits());    
}

bool Fixed::operator<=(const Fixed& other) const
{
    return (this->getRawBits() <= other.getRawBits());    
}

bool Fixed::operator==(const Fixed& other) const
{
    return (this->getRawBits() == other.getRawBits());    
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (this->getRawBits() != other.getRawBits());    
}

Fixed& Fixed::operator+(const Fixed& other)
{
    Fixed result;
    
    result.setRawBits(this->getRawBits() + other.getRawBits());
    return (result);
}

Fixed& Fixed::operator-(const Fixed& other)
{
    Fixed result;
    
    result.setRawBits(this->getRawBits() - other.getRawBits());
    return (result);
}

Fixed& Fixed::operator*(const Fixed& other)
{
    Fixed result;
    
    // result.setRawBits((this->getRawBits() * other.getRawBits()) * (1 << Fixed::fractionBitNum_));
    result.setRawBits(this->getRawBits() * other.getRawBits());
    return (result);
}

Fixed& Fixed::operator/(const Fixed& other) 
{
    Fixed result;
    
    // result.setRawBits((this->getRawBits() / other.getRawBits()) * (1 << Fixed::fractionBitNum_));
    result.setRawBits(this->getRawBits() / other.getRawBits());
    // Because of possibility of overflow, 
    return (result);
}

Fixed& Fixed::operator++(void)
{
    this->fixed_value_ += 1;
    return (*this);    
}

Fixed& Fixed::operator++(int dumy)
{
    Fixed copy(*this);

    (void)dumy;
    this->fixed_value_ += 1;
    return (copy);
}

Fixed& Fixed::operator--(void)
{
    this->fixed_value_ -= 1;
    return (*this);    
}

Fixed& Fixed::operator--(int dumy)
{
    Fixed copy(*this);

    (void)dumy;
    this->fixed_value_ -= 1;
    return (copy);
}

Fixed &Fixed::operator=(const Fixed& other)
{
    if (*this != other)
        this->fixed_value_ = other.getRawBits();
    return *this;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:24:00 by junoh             #+#    #+#             */
/*   Updated: 2022/11/21 16:24:13 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionBitNum_ = 8; 

Fixed::Fixed()
    : fixed_value_(0)
{   
}

Fixed::Fixed(const Fixed& copy)
{
    *this = copy;    
}

Fixed::Fixed(int const i)
{
    this->fixed_value_ = i << Fixed::fractionBitNum_;
}

Fixed::Fixed(float const f)
{
    this->fixed_value_ = (int)roundf(f * (1 << fractionBitNum_));
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
    return (float)(this->getRawBits()) / (float)(1 << Fixed::fractionBitNum_);
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

Fixed Fixed::operator+(const Fixed& other) const
{
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed& Fixed::operator++(void)
{
    this->fixed_value_ += 1;
    return (*this);    
}

Fixed Fixed::operator++(int dumy)
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

Fixed Fixed::operator--(int dumy)
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

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);    
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);    
}

std::ostream& operator<<(std::ostream& os, const Fixed& value)
{
    os << value.toFloat();
    return (os);
}
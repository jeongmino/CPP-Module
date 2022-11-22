/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:07:37 by junoh             #+#    #+#             */
/*   Updated: 2022/11/22 14:28:39 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :  name_("Default"),
                            hit_point_(10),
                            energe_point_(10),
                            attack_damage_(0)
{
    std::cout << "ClapTrap constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : name_(name),
                                             hit_point_(10),
                                             energe_point_(10),
                                             attack_damage_(0)
{
    std::cout << "ClapTrap constructor " << this->name_ << " is called" << std::endl;
    std::cout << *this << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "copy constructor is called" << std::endl;
    *this = copy;
    std::cout << *this << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return (this->name_);
}

int ClapTrap::getAttackDamage(void) const
{
    return (this->attack_damage_);
}

int ClapTrap::getEnergyPoint(void) const
{
    return (this->energe_point_);
}

int ClapTrap::getHitPoint(void) const
{
    return (this->hit_point_);
}

void ClapTrap::setName(const std::string name)
{
    this->name_ = name;
}

void ClapTrap::setHitPoint(int hit_point)
{
    this->hit_point_ = hit_point;
}

void ClapTrap::setEnergyPoint(int energy_point)
{
    this->energe_point_ = energy_point;
}

void ClapTrap::setAttackDamage(int attack_damage)
{
    this->attack_damage_ = attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->hit_point_ = other.hit_point_;
        this->energe_point_ = other.energe_point_;
        this->attack_damage_= other.attack_damage_;
        this->name_ = other.name_;
    }
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->hit_point_ <= 0)
    {
        std::cout << this->name_ << " has no hit point.... Cannot attack " << std::endl;
        return ;
    }
    if (this->energe_point_ > 0)
    {
        this->energe_point_ -= 1;
        std::cout << this->name_ << " attacks "
                  << target << " causing " << this->attack_damage_
                  << " of hit damage" << std::endl;   
    }
    else
        std::cout << this->name_ << " has not enough energy" << std::endl;
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int origin = amount;
    if (this->hit_point_ < (int)amount)
        amount = this->hit_point_;
    this->hit_point_ -= amount;
    std::cout << this->name_ << " is attacked " 
              << origin << " of damage.";
    if (origin > amount)
        std::cout << " But max damage was " << amount; 
    std::cout << std::endl;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    unsigned int origin = amount;
    if (this->hit_point_ + (int)amount > 10)
        amount = 10 - hit_point_;
    this->hit_point_ += amount;
    std::cout << this->name_ << " is repaired "
              << origin << " of hit point.";
     if (origin > amount)
        std::cout << " But max healing was " << amount;
    std::cout << std::endl;
    return ;
}

std::ostream& operator<<(std::ostream& os, const ClapTrap& clap)
{
    os << "name : " << clap.getName() << ", "
       << "HP : " << clap.getHitPoint() << ", "
       << "MP : " << clap.getEnergyPoint() << ", "
       << "AD : " << clap.getAttackDamage();
    return (os);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap desstructor " << this->name_ << " is called" << std::endl;
}

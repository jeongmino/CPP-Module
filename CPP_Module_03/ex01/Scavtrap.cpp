/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:13:22 by junoh             #+#    #+#             */
/*   Updated: 2022/11/22 14:29:41 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->name_ = "Default";
    this->hit_point_ = 100;
    this->energe_point_ = 50;
    this->attack_damage_ = 20;
    
    std::cout << "Default ScavTrap constructor " << this->name_ << " is called" << std::endl;
    std::cout << *this << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{    
    this->name_ = name;
    this->hit_point_ = 100;
    this->energe_point_ = 50;
    this->attack_damage_ = 20;
    
    std::cout << "ScavTrap constructor " << this->name_ << " is called" << std::endl;
    std::cout << *this << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    std::cout << "copy constructor is called" << std::endl;
    *this = copy;
    std::cout << *this << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
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

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor " << this->name_ << " is called" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl
              << "    ScavTrap, guardGate-mode  " << std::endl
              << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hit_point_ <= 0)
    {
        std::cout << this->name_ << " has no hit point.... Cannot attack " << std::endl;
        return ;
    }
    if (this->energe_point_ > 0)
    {
        this->energe_point_ -= 1;
        std::cout << this->name_ << " powerfully and strongly and fantasticly attacks "
                  << target << " causing " << this->attack_damage_
                  << " of hit damage" << std::endl;   
    }
    else
        std::cout << this->name_ << " has not enough energy" << std::endl;
    return ;
}

std::ostream& operator<<(std::ostream& os, const ScavTrap& scav)
{
    os << "name : " << scav.getName() << ", "
       << "HP : " << scav.getHitPoint() << ", "
       << "MP : " << scav.getEnergyPoint() << ", "
       << "AD : " << scav.getAttackDamage();
    return (os);
}
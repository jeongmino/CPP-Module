/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:13:22 by junoh             #+#    #+#             */
/*   Updated: 2022/11/18 11:51:32 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{    
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

std::ostream& operator<<(std::ostream& os, const ScavTrap& scav)
{
    os << "name : " << scav.getName() << ", "
       << "HP : " << scav.getHitPoint() << ", "
       << "MP : " << scav.getEnergyPoint() << ", "
       << "AD : " << scav.getAttackDamage();
    return (os);
}
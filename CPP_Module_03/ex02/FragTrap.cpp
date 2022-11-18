/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:00:21 by junoh             #+#    #+#             */
/*   Updated: 2022/11/18 12:14:42 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor " << this->name_ << " is called" << std::endl;
    this->hit_point_ = 100;
    this->energe_point_ = 100;
    this->attack_damage_ = 30;
    std::cout << *this << std::endl;  
}

FragTrap::FragTrap(const FragTrap& copy)
{
    std::cout << "copy constructor is called" << std::endl;
    *this = copy;
    std::cout << *this << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor " << this->name_ << " is called" << std::endl;    
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Put your hands up guys!" << std::endl;    
}

std::ostream& operator<<(std::ostream& os, const FragTrap& frag)
{
    os << "name : " << frag.getName() << ", "
       << "HP : " << frag.getHitPoint() << ", "
       << "MP : " << frag.getEnergyPoint() << ", "
       << "AD : " << frag.getAttackDamage();
    return (os);
}

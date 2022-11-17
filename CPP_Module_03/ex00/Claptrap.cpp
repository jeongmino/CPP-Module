/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:07:37 by junoh             #+#    #+#             */
/*   Updated: 2022/11/17 15:35:45 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Claptrap::Claptrap(const std::string name) : hit_point_(10),
                                             energe_point_(10),
                                             attack_damage_(0),
                                             name_(name)
{
    std::cout << "Claptrap constructor is called" << std::endl;
    std::cout << *this << std::endl;
}

Claptrap::Claptrap(const Claptrap& copy)
{
    std::cout << "copy constructor is called" << std::endl;
    *this = copy;
    std::cout << *this << std::endl;
}

std::string Claptrap::getName(void) const
{
    return (this->name_);
}

int Claptrap::getAttackDamage(void) const
{
    return (this->attack_damage_);
}

int Claptrap::getEnergyPoint(void) const
{
    return (this->energe_point_);
}

int Claptrap::getHitPoint(void) const
{
    return (this->hit_point_);
}

void Claptrap::setName(const std::string name)
{
    this->name_ = name;
}

void Claptrap::setHitPoint(int hit_point)
{
    this->hit_point_ = hit_point;    
}

void Claptrap::setEnergyPoint(int energy_point)
{
    this->energe_point_ = energy_point;
}

void Claptrap::setAttackDamage(int attack_damage)
{
    this->attack_damage_ = attack_damage;
}

Claptrap& Claptrap::operator=(const Claptrap& other)
{
    if (this != &other)
    {
        this->hit_point_ = other.hit_point_;
        this->energe_point_ = other.energe_point_;
        this->attack_damage_= other.attack_damage_;
        this->name_ = other.name_;
    }
}

std::ostream& operator<<(std::ostream& os, const Claptrap& clap)
{
    os << "name : " << clap.getName() << ", "
       << "HP : " << clap.getHitPoint() << ", "
       << "MP : " << clap.getEnergyPoint() << ", "
       << "AD : " << clap.getAttackDamage() << ", " 
       << std::endl;
    return (os);
}
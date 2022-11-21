/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:30:42 by junoh             #+#    #+#             */
/*   Updated: 2022/11/21 13:17:32 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::setName(std::string name){
    this->name_ = name;
}

std::string HumanA::getName(void) const{
    return (this->name_);
}

void HumanA::setWeapon(Weapon& weapon){
    this->weapon_ = weapon;
}

Weapon& HumanA::getWeapon(void) const{
    return (this->weapon_);
}

HumanA::HumanA(std::string name, Weapon& weapon) : name_(name),
                                                   weapon_(weapon)
{
}

void HumanA::attack(void){
    std::cout << this->name_ << " attacks with " \
    << this->getWeapon().getType() << std::endl;
}

HumanA::~HumanA(void)
{
}
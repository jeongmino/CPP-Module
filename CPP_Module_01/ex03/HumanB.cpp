/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:30:42 by junoh             #+#    #+#             */
/*   Updated: 2022/11/21 13:15:19 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setName(std::string name){
    this->name_ = name;
}

std::string HumanB::getName(void) const{
    return (this->name_);
}

void HumanB::setWeapon(Weapon& weapon){
    this->weapon_ = &weapon;
}

Weapon* HumanB::getWeapon(void) const{
    return (this->weapon_);
}

HumanB::HumanB(std::string name){
    this->name_ = name;
    this->weapon_ = NULL;
}

void HumanB::attack(void){
    if (this->weapon_ == NULL)
    {
        std::cout << "No weapons here" << std::endl;
        return ;
    }
    std::cout << this->name_ << " attacks with " \
    << this->getWeapon()->getType() << std::endl;
}

HumanB::~HumanB(void)
{
}
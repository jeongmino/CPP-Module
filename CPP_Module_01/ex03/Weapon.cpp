/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:17:50 by junoh             #+#    #+#             */
/*   Updated: 2022/11/10 17:19:49 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void    Weapon::setType(std::string type){
    this->type_ = type;
}

std::string Weapon::getType(void) const{
    return (this->type_);    
}

Weapon::Weapon(std::string type){
    this->setType(type);    
}
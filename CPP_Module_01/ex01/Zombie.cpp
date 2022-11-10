/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:58:11 by junoh             #+#    #+#             */
/*   Updated: 2022/11/10 15:11:27 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    this->setName(name);
}

Zombie::Zombie(void){
}

std::string    Zombie::getName(void){
    return (this->name_);
}

void Zombie::setName(std::string str){
    this->name_ = str;
}

void    Zombie::announce(void){
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

Zombie::~Zombie(void){
    std::cout << this->getName() << " : I was hoping for a Pyramid..." << std::endl;
}
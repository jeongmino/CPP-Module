/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:13:22 by junoh             #+#    #+#             */
/*   Updated: 2022/11/17 21:42:36 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{    
    this->hit_point_ = 100;
    this->energe_point_ = 50;
    this->attack_damage_ = 20;
    
    std::cout << "ScavTrap constructor is called" << std::endl;
    std::cout << *this << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    std::cout << "copy constructor is called" << std::endl;
    *this = copy;
    std::cout << *this << std::endl;
}

std::ostream& ScavTrap::operator=(const ScavTrap& other)
{
    
}
                                             
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:11:01 by junoh             #+#    #+#             */
/*   Updated: 2022/11/20 00:04:58 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor is called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
    std::cout << "copy constructor is called" << std::endl;
    *this = copy;
}

Animal& Animal::operator=(const Animal& other)
{   
    if (this != &other)
        this->type_ = other.type_;
    return (*this);
}

void Animal::setType(std::string type)
{
    this->type_ = type;
}

std::string Animal::getType(void) const
{
    return (this->type_);
}

Animal::~Animal(void)
{
       std::cout << "Animal destructor is called" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "What do animals Say?" << std::endl;
}


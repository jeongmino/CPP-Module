/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:06:32 by junoh             #+#    #+#             */
/*   Updated: 2022/11/19 23:56:43 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->type_ = "Dog";
    std::cout << "Dog constructor is called" << std::endl;
}

Dog::Dog(const Dog& copy)
{
    std::cout << "copy constructor is called" << std::endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
        this->type_ = other.type_;
    return (*this);
}

std::string Dog::getType(void) const
{
    return (this->type_);
}

void Dog::makeSound(void) const
{
    std::cout << "Bark! Bark!" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor is called" << std::endl;
}


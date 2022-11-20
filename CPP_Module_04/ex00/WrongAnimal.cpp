/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:11:01 by junoh             #+#    #+#             */
/*   Updated: 2022/11/19 11:16:44 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->type_ = "WrongAnimal";
    std::cout << "WrongAnimal constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    std::cout << "copy constructor is called" << std::endl;
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{   
    if (this != &other)
        this->type_ = other.type_;
    return (*this);
}

void WrongAnimal::setType(std::string type)
{
    this->type_ = type;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type_);
}

WrongAnimal::~WrongAnimal(void)
{
       std::cout << "WrongAnimal destructor is called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "What do WrongAnimals Say?" << std::endl;
}


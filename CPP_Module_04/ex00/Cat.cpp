/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:22:10 by junoh             #+#    #+#             */
/*   Updated: 2022/11/19 23:56:37 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Cat.hpp"

 Cat::Cat(void)
 {
    this->type_ = "Cat";
    std::cout << "Cat constructor is called" << std::endl;
 }

 Cat::Cat(const Cat& copy)
 {
    std::cout << "copy constructor is called" << std::endl;
    *this = copy;
 }

 Cat& Cat::operator=(const Cat& other)
 {
    if (this != &other)
        this->type_ = other.type_;
    return (*this);
 }

std::string Cat::getType(void) const
{
    return (this->type_);
}

void Cat::makeSound(void) const
{
    std::cout << "Meow~ Meow" << std::endl;
}

 Cat::~Cat()
 {
    std::cout << "Cat destructor is called" << std::endl;
 }
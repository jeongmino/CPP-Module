/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:22:10 by junoh             #+#    #+#             */
/*   Updated: 2022/11/20 01:01:09 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Cat.hpp"

 Cat::Cat(void)
 {
    this->type_ = "Cat";
    this->brain_ = new Brain();
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
    {
        delete this->brain_;
        this->brain_ = new Brain(*(other.brain_));
        this->type_ = other.type_;
    }
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
    delete this->brain_;
    std::cout << "Cat destructor is called" << std::endl;
 }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:22:10 by junoh             #+#    #+#             */
/*   Updated: 2022/11/22 16:28:01 by junoh            ###   ########.fr       */
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
    this->brain_ = NULL;
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

Brain* Cat::getBrain(void) const
{
    return (this->brain_);
}

 Cat::~Cat()
 {
    delete this->brain_;
    std::cout << "Cat destructor is called" << std::endl;
 }
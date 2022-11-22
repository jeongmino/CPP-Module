/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:22:10 by junoh             #+#    #+#             */
/*   Updated: 2022/11/19 11:18:20 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "WrongCat.hpp"

 WrongCat::WrongCat(void)
 {
    this->type_ = "WrongCat";
    std::cout << "WrongCat constructor is called" << std::endl;
 }

 WrongCat::WrongCat(const WrongCat& copy)
 {
    std::cout << "copy constructor is called" << std::endl;
    *this = copy;
 }

 WrongCat& WrongCat::operator=(const WrongCat& other)
 {
    if (this != &other)
        this->type_ = other.type_;
    return (*this);
 }

std::string WrongCat::getType(void) const
{
    return (this->type_);
}

void WrongCat::makeSound(void) const
{
    std::cout << "What do WrongCat Say?" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor is called" << std::endl;
}
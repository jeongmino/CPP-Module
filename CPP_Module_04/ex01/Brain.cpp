/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 00:44:31 by junoh             #+#    #+#             */
/*   Updated: 2022/11/22 16:27:00 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor is called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    std::cout << "copy constructor is called" << std::endl;
    *this = copy;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
        for (int i = 0; i < 100; i++)
            this->ideas_[i] = other.ideas_[i];
    return (*this);
}

std::string Brain::getIdea(void) const
{
    return (this->ideas_[0]);    
}

void Brain::setIdea(std::string str)
{
    this->ideas_[0] = str;
}


Brain::~Brain()
{
    std::cout << "Brain destructor is called" << std::endl;
}
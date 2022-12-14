/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:42:45 by junoh             #+#    #+#             */
/*   Updated: 2022/11/29 13:58:36 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name_("Default"),
                               grade_(150)
{
    std::cout << "Bureaucrat constructor " << this->name_  
              << " is called. Grade : " << this->grade_ << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name),
                                                            grade_(grade)
{
    if (this->grade_ < 1)
        throw GradeTooHighException();
    else if (this->grade_ > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat constructor " << this->name_  
              << " is called. Grade : " << this->grade_ << std::endl;    
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    *this = copy;
    std::cout << "copy constructor " << this->name_ 
              << "is called. Grade : " << this->grade_ << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
        *this = other;
    return (*this);
}

std::string Bureaucrat::getName(void) const
{
    return (this->name_);
}

int Bureaucrat::getGrade(void) const 
{
    return (this->grade_);
}

void Bureaucrat::setGrade(int grade)
{
    this->grade_ = grade;
}

void Bureaucrat::IncreasementGrade(void)
{
    if (this->grade_ == 1)
        throw GradeTooHighException();
    this->grade_--;
    std::cout << "grade is increased" << std::endl;
}

void Bureaucrat::DecreasementGrade(void)
{
    if (this->grade_ == 150)
        throw GradeTooLowException();
    this->grade_++;
    std::cout << "grade is decreased" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too high\n");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("Grade is too low\n");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << " bureaucrat grade : " << bureaucrat.getGrade() 
       << "." << std::endl;
    return os;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor is called" << std::endl;
}
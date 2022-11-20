/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:08:50 by junoh             #+#    #+#             */
/*   Updated: 2022/11/20 17:34:47 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name_("Defalut"),
                   gradeToBeSigned_(gradeToBeSigned_),
                   gradeToBeExecuted_(gradeToBeExecuted_)
{
    this->signed_ = false;
    std::cout << "From constructor is called" << std::endl;
}

Form::Form(const std::string name, \
const int gradeToBeSigned, const int gradeToBeExecuted) : name_(name),
                                                          gradeToBeSigned_(gradeToBeSigned),
                                                          gradeToBeExecuted_(gradeToBeExecuted_)
{
    this->signed_ = false;
    std::cout << "Form constructor is called" << std::endl;
}

Form::Form(const Form& copy)
{
    std::cout << "Copy constructor is called" << std::endl;
    *this = copy;
    this->signed_ = false;
}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
        *this = other;
    return (*this);
}

std::string Form::getName(void) const
{
    return (this->name_);
}

bool Form::getSigned(void) const
{
    return (this->signed_);
}

int Form::getGradeToBeSigned(void) const
{
    return (this->gradeToBeSigned_);
}

int Form::getGradeToBeExecuted(void) const
{
    return (this->gradeToBeExecuted_);
}

void Form::beSigned(Bureaucrat& b)
{
    if (this->gradeToBeSigned_ > b.getGrade())
        throw GradeTooLowException();
    this->signed_ = true;
    std::cout << b.getName() << " can sign the form." << std::endl;    
}

const char* Form::GradeTooLowException::what(void) const throw()
{
    return ("Grade is too Low to be sign the form");
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
    os << "Form name : " << f.getName() 
       << " Form isSigned : " << f.getSigned()
       << " Form gradeToBeSigned : " << f.getGradeToBeSigned()
       << " Form gradeToBeExecuted : " << f.getGradeToBeExecuted() << std::endl;
    return (os);       
}

Form::~Form()
{
    std::cout << "Form destructor is called" << std::endl;
}

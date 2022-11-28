/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:08:50 by junoh             #+#    #+#             */
/*   Updated: 2022/11/28 11:37:39 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name_("Defalut"),
                   signed_(false),
                   gradeToBeSigned_(60),
                   gradeToBeExecuted_(40)
{
    std::cout << "From constructor is called" << std::endl;
}

Form::Form(const std::string name, \
const int gradeToBeSigned, const int gradeToBeExecuted) : name_(name),
                                                          signed_(false),
                                                          gradeToBeSigned_(gradeToBeSigned),
                                                          gradeToBeExecuted_(gradeToBeExecuted)
{
    std::cout << "Form constructor is called" << std::endl;
}

Form::Form(const Form& copy) : name_(copy.getName()),
                               signed_(copy.getSigned()),
                               gradeToBeSigned_(copy.getGradeToBeSigned()),
                               gradeToBeExecuted_(copy.getGradeToBeExecuted())
{
    std::cout << "Copy constructor is called" << std::endl;
    *this = copy;
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
    if (this->gradeToBeSigned_ < b.getGrade())
    {
        b.signForm(*this);
        throw GradeTooLowException();
    }
    this->signed_ = true;    
}

const char* Form::GradeTooLowException::what(void) const throw()
{
    return ("Grade is too Low to sign the form");
}

const char* Form::NoExecutableException::what(void) const throw()
{
    return ("Grade is too Low to execute the form");
}

Form::~Form()
{
    std::cout << "Form destructor is called" << std::endl;
}

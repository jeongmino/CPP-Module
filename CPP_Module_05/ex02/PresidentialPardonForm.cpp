/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:16:23 by junoh             #+#    #+#             */
/*   Updated: 2022/11/26 18:04:15 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5),
                                                       target_("Default")
{
    std::cout << "PresidentialPardonForm default constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5),
                                                                     target_(target)
{
    std::cout << "PresidentialPardonForm constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
    *this = copy;
    std::cout << "PresidentialPardonForm Copy constructor is called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other)
        this->target_ = other.getTarget();
    return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const
{
    return (this->target_);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() < this->getGradeToBeSigned())
    {
        if (executor.getGrade() < this->getGradeToBeExecuted())
            std::cout << this->target_ << " has been pardoned by Zaphod Beeblebrox" << std::endl;
        else 
            throw NoExecutableException();
    }
    else
        GradeTooLowException();
    return;
}

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& f)
{
    os << "Form name : " << f.getName()
       << "Target : " <<  f.getTarget()
       << " Form isSigned : " << f.getSigned()
       << " Form gradeToBeSigned : " << f.getGradeToBeSigned()
       << " Form gradeToBeExecuted : " << f.getGradeToBeExecuted() << std::endl;
    return (os);       
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm destructor is called" << std::endl;
}
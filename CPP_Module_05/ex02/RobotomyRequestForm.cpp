/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:29:37 by junoh             #+#    #+#             */
/*   Updated: 2022/11/26 18:56:16 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45),
                                                 target_("Default")
{
    std::cout << "RobotomyRequestForm default constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45),
                                                               target_(target)
{
    std::cout << "RobotomyRequestForm constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
    *this = copy;
    std::cout << "RobotomyRequestForm Copyy constructor is called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
        this->target_ = other.getTarget();
    return (*this);
}

void randomChoice(const RobotomyRequestForm& Robotmy)
{
    // srand(time(0));
    int num = rand();

    if (num % 2 == 0)
        std::cout << Robotmy.getName() << " is Robotmized...." << std::endl;
    else
        std::cout << Robotmy.getName() << " is not Robotmized" << std::endl;
    return ;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    std::cout << "Drrrriiillllinnnnngggggggg" << std::endl;
    if (executor.getGrade() < this->getGradeToBeSigned())
    {
        if (executor.getGrade() < this->getGradeToBeExecuted())
            randomChoice(*this);
        else 
            throw NoExecutableException();
    }
    else
        GradeTooLowException();
    return;
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return (this->target_);
}

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& f)
{
    os << "Form name : " << f.getName()
       << "Target : " <<  f.getTarget()
       << " Form isSigned : " << f.getSigned()
       << " Form gradeToBeSigned : " << f.getGradeToBeSigned()
       << " Form gradeToBeExecuted : " << f.getGradeToBeExecuted() << std::endl;
    return (os);       
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotmyRequestForm destructor is called" << std::endl;
}

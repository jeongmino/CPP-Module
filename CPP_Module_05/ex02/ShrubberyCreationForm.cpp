/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:27:04 by junoh             #+#    #+#             */
/*   Updated: 2022/11/26 12:31:55 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery", 145, 137),
                                                     target_("default")
{
	std::cout << "ShrubberyCreationForm Default Constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137),
                                                                   target_(target)
{
	std::cout << "ShrubberyCreationForm Constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
        *this = copy;
        std::cout << "ShrubberyCreationForm Copy Constructor is called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
        this->target_ = other.getTarget();
    return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const
{
    return (this->target_);
}

const char* ShrubberyCreationForm::ReadfileExecption::what(void) const throw()
{
    return ("Read File Failure\n"); 
}

void ShrubberyCreationForm::execute(Bureaucrat& const executor) const
{
    if (executor.getGrade() < this->getGradeToBeSigned())
    {
        if (executor.getGrade() < this->getGradeToBeExecuted())
        {
            std::ofstream outfile(this->target_ + "_Shrubbery");
            std::ifstream infile("tree.txt");
            if (infile.fail())
                throw ReadfileExecption();                
            std::string tree;
            std::getline(infile, tree, '\0');
            outfile << tree;
        }
        else 
            throw NoExecutableException();
    }
    else
        GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& f)
{
    os << "Form name : " << f.getName()
       << "Target : " <<  f.getTarget()
       << " Form isSigned : " << f.getSigned()
       << " Form gradeToBeSigned : " << f.getGradeToBeSigned()
       << " Form gradeToBeExecuted : " << f.getGradeToBeExecuted() << std::endl;
    return (os);       
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm destructor is called" << std::cout;
}
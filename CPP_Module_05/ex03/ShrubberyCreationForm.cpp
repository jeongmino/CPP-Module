/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:27:04 by junoh             #+#    #+#             */
/*   Updated: 2022/11/28 11:48:15 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137),
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

void randomLight(std::ofstream &file, char c)
{
    int t = rand() % 4;
    
    switch (t)
    {
        case 0:
            file << PINK << c;
            break;
        case 1:
            file << RED << c;
            break;
        case 2:
            file << YELLOW << c;
            break;
        case 3:
            file << PURPLE << c;
            break;
    }
}

void Colorring(std::string str, std::ofstream &file)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == 'O' || str[i] == 'o')
            randomLight(file, str[i]);
        else if (str[i] == '*')
            file << GREEN << str[i];
        else if (str[i] == '#')
            file << BROWN << str[i];
        else
            file << str[i];
    }
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
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
            Colorring(tree, outfile);
            // outfile << tree;
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
       << " Form isSigned : " << std::boolalpha << f.getSigned() << std::endl
       << " Form gradeToBeSigned : " << f.getGradeToBeSigned()
       << " Form gradeToBeExecuted : " << f.getGradeToBeExecuted() << std::endl;
    return (os);       
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm destructor is called" << std::endl;
}
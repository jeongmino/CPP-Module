/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:46:25 by junoh             #+#    #+#             */
/*   Updated: 2022/11/26 23:37:35 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Intern constructor is called" << std::endl;
}

Intern::Intern(const Intern& copy)
{
    *this = copy;
    std::cout << "Intern Copy constructor is called" << std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return (*this);
}

Form* Intern::makeShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form* Intern::makeRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form* Intern::makePresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form* Intern::makeExection(std::string target)
{
    (void)target;
    throw FormNotFoundException();   
    return ((Form *)NULL);
}

const char* Intern::FormNotFoundException::what(void) const throw()
{
    return ("Form you want is not found");
}

Form* Intern::makeForm(std::string name, std::string target)
{
    Form*   (Intern::*f[4])(std::string) = {&Intern::makeShrubberyCreationForm,
                                   &Intern::makeRobotomyRequestForm, 
                                   &Intern::makePresidentialPardonForm,
                                   &Intern::makeExection};
                                   
    std::string targetArr[3] = {"shrubbery creation",
                                "robotomy request", 
                                "president Pardon"};
    int i = 0;
    while (i < 3 && name != targetArr[i])
        ;
    return ((this->*f[i])(target));
}

Intern::~Intern(void)
{
    std::cout << "Intern destructor is called" << std::endl;
}
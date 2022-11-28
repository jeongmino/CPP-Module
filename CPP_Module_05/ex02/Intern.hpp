/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:34:47 by junoh             #+#    #+#             */
/*   Updated: 2022/11/26 23:37:46 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public :
        Intern(void);
        Intern(const Intern& copy);
        Intern& operator=(const Intern& other);
        ~Intern(void);
    public :
        Form *makeForm(std::string name, std::string target);
        Form *makeShrubberyCreationForm(std::string target);
        Form *makeRobotomyRequestForm(std::string target);
        Form *makePresidentialPardonForm(std::string target);
        Form *makeExection(std::string name);
        class FormNotFoundException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
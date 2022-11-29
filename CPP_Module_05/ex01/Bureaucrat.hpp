/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:22:38 by junoh             #+#    #+#             */
/*   Updated: 2022/11/29 13:58:42 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private : 
        const std::string name_;
        int grade_;
    public :
        Bureaucrat(void);
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();
    public :
        std::string getName(void) const;
        int getGrade(void) const ;
        void setGrade(int grade);
        
    public :
        void IncreasementGrade(void);
        void DecreasementGrade(void);
        void signForm(const Form& form) const;
        
    class GradeTooHighException : public std::exception
    {
        public :
            virtual const char* what(void) const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public :
            virtual const char* what(void) const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
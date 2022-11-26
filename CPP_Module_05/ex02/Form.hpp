/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:02:07 by junoh             #+#    #+#             */
/*   Updated: 2022/11/26 18:09:45 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    protected:
        const std::string name_;
        bool signed_;
        const int gradeToBeSigned_;
        const int gradeToBeExecuted_;

    public :
        Form(void);
        Form(const std::string name, const int gradeToBeSigned, const int gradeToBeExecuted);
        Form(const Form& copy);
        Form& operator=(const Form& other);
        ~Form();

    public :
        std::string getName(void) const;
        bool getSigned(void) const;
        int getGradeToBeSigned(void) const;
        int getGradeToBeExecuted(void) const;
        void setName(const std::string name);
        
    public :
        void beSigned(Bureaucrat& b);
        virtual void execute(Bureaucrat const &executor) const = 0;
 
    class GradeTooLowException : public std::exception
    {
        virtual const char* what(void) const throw();
    };
    class NoExecutableException : public std::exception
    {
        virtual const char* what(void) const throw();
    };
};

// std::ostream& operator<<(std::ostream& os, const Form& f);

#endif
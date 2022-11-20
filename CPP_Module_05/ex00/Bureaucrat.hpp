/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:22:38 by junoh             #+#    #+#             */
/*   Updated: 2022/11/20 16:01:41 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

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
    public :
        void IncreasementGrade(void);
        void DecreasementGrade(void);
        // void signform(void);
        
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
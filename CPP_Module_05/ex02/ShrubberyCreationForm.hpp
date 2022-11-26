/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:21:29 by junoh             #+#    #+#             */
/*   Updated: 2022/11/26 18:43:08 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
#include <sstream>
#include <ctime>
#include <cstdlib>

# define PINK "\e[0;38;5;199m"
# define GREEN "\e[0;32m"
# define BROWN "\e[0;33m"
# define RED   "\e[1;31m"
# define PURPLE  "\e[1;35m"
# define YELLOW  "\e[1;33m"

class ShrubberyCreationForm : public Form
{
    private :
        std::string target_;

    public :
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& other);        ~ShrubberyCreationForm(void);
    public :
        std::string getTarget(void) const;
    
    public :
        void execute(Bureaucrat const &executor) const;
    class ReadfileExecption : public std::exception
    {
        virtual const char* what(void) const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& f);

#endif 
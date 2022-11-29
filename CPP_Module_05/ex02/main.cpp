/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:05:13 by junoh             #+#    #+#             */
/*   Updated: 2022/11/29 14:10:36 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try{
        Bureaucrat first("first", 1);
        Bureaucrat notthing("notthing", 150);

        ShrubberyCreationForm sh("Shrubbery");
        RobotomyRequestForm ro("Robotomy");
        PresidentialPardonForm pp("President");

        std::cout << first << std::endl;
        std::cout << notthing << std::endl;
        std::cout << sh << std::endl;
        std::cout << ro << std::endl;
        std::cout << pp << std::endl;  

        srand(time(0));

        first.signForm(sh);
        first.signForm(ro); 
        first.signForm(pp);

        first.executeForm(sh);
        first.executeForm(ro);
        first.executeForm(pp);

        // notthing.signForm(sh);
        // notthing.signForm(sh);
        // notthing.signForm(sh);
        
        // notthing.executeForm(sh);
        // notthing.executeForm(ro);
        // notthing.executeForm(pp);

    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;    
    }
    return (0);
}
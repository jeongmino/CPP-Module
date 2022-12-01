/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:05:13 by junoh             #+#    #+#             */
/*   Updated: 2022/11/29 14:41:04 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

int main(void)
{
    Intern someRandomIntern_sh;
    Intern someRandomIntern_rb;
    Intern someRandomIntern_pp;
    // Intern someRandomIntern_ex;
    
    Form* rrf_sh;
    Form* rrf_rb;
    Form* rrf_pp;
    // Form* rrf_ex;

    try{
        Bureaucrat b("Mr_everything", 1);
        
        rrf_sh = someRandomIntern_sh.makeForm("shrubbery creation", "Bender");
        rrf_rb = someRandomIntern_rb.makeForm("robotomy request", "robotomy");
        rrf_pp = someRandomIntern_pp.makeForm("president pardon", "Ralph");
        // rrf_ex = someRandomIntern_ex.makeForm("asasdasdasdaasdasd", "junoh");
        
        b.signForm(*rrf_sh);
        b.signForm(*rrf_rb);
        b.signForm(*rrf_pp);
        // b.signForm(*rrf_ex);

        b.executeForm(*rrf_sh);
        b.executeForm(*rrf_rb);
        b.executeForm(*rrf_pp);
        // b.executeForm(*rrf_ex);
        delete rrf_sh;
        delete rrf_rb;
        delete rrf_pp;
        // delete rrf_ex;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;    
    }
    return (0);
}
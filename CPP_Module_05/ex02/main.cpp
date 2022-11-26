/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:05:13 by junoh             #+#    #+#             */
/*   Updated: 2022/11/21 14:56:55 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
    try{
        Form form_1;
        Form form_2("Form_2", 50, 10);
        
        Bureaucrat high("High_bureaucrat", 5);
        Bureaucrat middle("Middle_bureaucrat", 25);
        Bureaucrat low("Low_bureaucrat", 51);

        form_1.beSigned(high);
        form_1.beSigned(middle);
        form_1.beSigned(low);
        form_2.beSigned(high);
        form_2.beSigned(middle);
        form_2.beSigned(low);
        
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;    
    }
    return (0);
}
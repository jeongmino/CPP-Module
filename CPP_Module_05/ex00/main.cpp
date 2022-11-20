/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:40:38 by junoh             #+#    #+#             */
/*   Updated: 2022/11/20 15:44:04 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try{      
        Bureaucrat human1;
        Bureaucrat human2("junoh", 23);
        Bureaucrat human3("one", 1);
        Bureaucrat human4("one-hundred-fifty", 150);
        // Bureaucrat human5("fail", 151);    
    
        human1.IncreasementGrade();
        human2.DecreasementGrade();
        // human3.IncreasementGrade();
        // human4.DecreasementGrade(); 
        // human5.IncreasementGrade();
        std::cout << human1 << std::endl;
        std::cout << human2 << std::endl;
        // std::cout << human3 << std::endl;
        // std::cout << human4 << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    


}
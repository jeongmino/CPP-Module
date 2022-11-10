/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:39:26 by junoh             #+#    #+#             */
/*   Updated: 2022/11/10 15:49:00 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& StringREF = str;
    
    std::cout << "\n@@@@@@@@@ The addresses of variables @@@@@@@@@\n" << std::endl;
    std::cout << "The address of str :                     " << &str << std::endl;
    std::cout << "The address of str by using Pointer :    " << stringPTR << std::endl;
    std::cout << "The address of str by using Reference :  " << &StringREF << std::endl;

    std::cout << "\n@@@@@@@@@ The contents of variables @@@@@@@@@\n" << std::endl;
    std::cout << "The contents of str :                    " << str << std::endl;
    std::cout << "The contents of str by using Pointer :   " << *stringPTR << std::endl;
    std::cout << "The contents of str by using Reference : " << StringREF << std::endl;

    std::cout << "\nDone" << std::endl;
    return (0);
}
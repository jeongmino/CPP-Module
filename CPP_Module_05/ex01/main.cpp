/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:05:13 by junoh             #+#    #+#             */
/*   Updated: 2022/11/20 23:55:08 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
    Form form_1;
    Form form_2("Form_2", 50, 10);
    Bureaucrat arr[3];
    Bureaucrat high("High_bureaucrat", 5);
    Bureaucrat middle("Middle_bureaucrat", 25);
    Bureaucrat low("Low_bureaucrat", 51);

    arr[0] = high;
    arr[1] = middle;
    arr[2] = low;
     
    
    return (0);
}
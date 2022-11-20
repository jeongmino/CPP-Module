/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:05:13 by junoh             #+#    #+#             */
/*   Updated: 2022/11/20 17:33:39 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

static void DocumentForApproval(const Form &form, Bureaucrat arr[])
{
    for (int i = 0; i < (sizeof(arr)/sizeof(Bureaucrat)); i++)
        form.beSigned(arr[i]);
}

int main(void)
{
    Form form_1();
    Form form_2("Form_2", 50, 10);
    Bureaucrat arr[3];
    Bureaucrat high("High_bureaucrat", 5);
    Bureaucrat middle("Middle_bureaucrat", 25);
    Bureaucrat low("Low_bureaucrat", 51);

    arr[0] = high;
    arr[1] = middle;
    arr[2] = low;
     
    DocumentForApproval(form_1&, arr);
    return (0);
}
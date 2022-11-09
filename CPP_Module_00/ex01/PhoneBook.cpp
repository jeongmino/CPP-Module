/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:42:27 by junoh             #+#    #+#             */
/*   Updated: 2022/10/21 19:13:04 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string.h>
#include <iostream>

 
void PhoneBook::PrintBook(void) const
{
    std::cout << "first_name" << first_name_ << std::endl;
    std::cout << "last_name" << last_name_ << std::endl;
    std::cout << "nick_name" << nick_name_ << std::endl;
    std::cout << "phone_number" << phone_number_ << std::endl;
    std::cout << "secret" << darkest_secret_ << std::endl;
}

void PhoneBook::InputBook (int i)
{
    idx_ = i;
    
    std::cout << "First_name : ";
    std::getline(std::cin, first_name_);
    std::cout << "Last_name : ";
    std::getline(std::cin, last_name_);
    std::cout << "nick_name : ";
    std::getline(std::cin, nick_name_);
    std::cout << "Phone_number : ";
    std::getline(std::cin, phone_number_);
    std::cout << "Darkest_secret : ";
    std::getline(std::cin, darkest_secret_);
}

void PhoneBook::PrintLine(std::string str) const
{
    if (str.length() <= 10)
        std::cout << std::right << std::setw(10) << str;
    else
    {
        str = str.substr(0, 9) + '.';
        std::cout << std::right << std::setw(10) << str;
    }
    std::cout << '|';
}

void PhoneBook::PrintPage(int i) const
{
    PrintLine(std::to_string(i));
    PrintLine(first_name_);
    PrintLine(last_name_);
    PrintLine(nick_name_);
    PrintLine(phone_number_);
    PrintLine(darkest_secret_);   
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:42:27 by junoh             #+#    #+#             */
/*   Updated: 2022/11/09 23:32:00 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string.h>
#include <iostream>

 
// void PhoneBook::PrintBook(void) const
// {
//     std::cout << "first_name" << first_name_ << std::endl;
//     std::cout << "last_name" << last_name_ << std::endl;
//     std::cout << "nick_name" << nick_name_ << std::endl;
//     std::cout << "phone_number" << phone_number_ << std::endl;
//     std::cout << "secret" << darkest_secret_ << std::endl;
// }

// void PhoneBook::InputBook (int i)
// {
//     idx_ = i;
    
//     std::cout << "First_name : ";
//     std::getline(std::cin, first_name_);
//     std::cout << "Last_name : ";
//     std::getline(std::cin, last_name_);
//     std::cout << "nick_name : ";
//     std::getline(std::cin, nick_name_);
//     std::cout << "Phone_number : ";
//     std::getline(std::cin, phone_number_);
//     std::cout << "Darkest_secret : ";
//     std::getline(std::cin, darkest_secret_);
// }

// void PhoneBook::PrintLine(std::string str) const
// {
//     if (str.length() <= 10)
//         std::cout << std::right << std::setw(10) << str;
//     else
//     {
//         str = str.substr(0, 9) + '.';
//         std::cout << std::right << std::setw(10) << str;
//     }
//     std::cout << '|';
// }

// void PhoneBook::PrintPage(int i) const
// {
//     PrintLine(std::to_string(i));
//     PrintLine(first_name_);
//     PrintLine(last_name_);
//     PrintLine(nick_name_);
//     PrintLine(phone_number_);
//     PrintLine(darkest_secret_);   
        // }

static std::string _checkLength(std::string str)
{
    if (str.length() < 10){
        return (str);
    }
    else{
        return (str.substr(0, 9) + '.');
    }
}

void    PhoneBook::displayPhoneBook(void)
{
    for (int i = 0; i < this->getCnt(); i++){
        std::cout << std::setw(10);
        std::cout << this->getIdx() << '|';
        std::cout << std::setw(10);
        std::cout << _checkLength(this->contact_[i].getFirstName()) << '|';
        std::cout << std::setw(10);
        std::cout << _checkLength(this->contact_[i].getLastName()) << '|';
        std::cout << std::setw(10);
        std::cout << _checkLength(this->contact_[i].getNickName()) << '|';
        std::cout << std::endl;
    }
}

void    PhoneBook::addContact(const std::string *strs, int idx)
{
    this->contact_[idx].setFirstName(strs[F_NAME]);
    this->contact_[idx].setLastName(strs[L_NAME]);
    this->contact_[idx].setNickName(strs[N_NAME]);
    this->contact_[idx].setPhoneNumber(strs[P_NUM]);
    this->contact_[idx].setDarkestSecret(strs[D_SECRET]);
    return;
}

std::string    getlineWithNoEof(std::string& msg)
{
    std::string str;
    
    do{
        std::cout << msg;
        if (!std::getline(std::cin, str)){
            std::cin.clear();
            std::clearerr(stdin);
            std::cout << "EOF : ERROR. Do it again" << std::endl;
        }
    } while(!str.empty());
    return (str);
}

static int isStrDigit(std::string& str)
{
    for (size_t len = 0; len < str.length(); len++){
        if (!std::isdigit(str.at(len)))
            return (1);
        return (0);
    }
}

void PhoneBook::add(void)
{
    std::string strs[5];

    strs[F_NAME] = getlineWithNoEof("What is First_name : ");
    strs[L_NAME] = getlineWithNoEof("What is your last_name : ");
    strs[N_NAME] = getlineWithNoEof("What is your Nick_name : ");
    do{
        strs[P_NUM] = getlineWithNoEof("What is your phone_number : ");
    }while (isStrDigit(strs[P_NUM]));
    strs[D_SECRET] = getlineWithNoEof("What is your Darkest_secret : ");
    this->idx_ = ++this->idx_ % 8;
    this->cnt_ += this->cnt_ < 8;
    addContact(strs, this->idx_);
}

void PhoneBook::search(void)
{
    if (!PhoneBook::getCnt()){
        std::cout << "You are not ready to search" << std::endl;
        return ;
    }
    displayPhoneBook();
    
}
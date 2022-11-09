/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:36:09 by junoh             #+#    #+#             */
/*   Updated: 2022/11/09 15:59:28 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::addContact(const std::string strs)
{
    this->first_name_ = strs[0];
    this->last_name_ = strs[1];
    this->nick_name_ = strs[2];
    this->phone_number_ = strs[3];
    this->darkest_secret_ = strs[4];
    return;
}

void    Contact::getlineWithNoEof()
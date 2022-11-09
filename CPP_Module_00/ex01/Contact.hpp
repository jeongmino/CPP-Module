/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:36:21 by junoh             #+#    #+#             */
/*   Updated: 2022/11/09 15:53:57 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


#include <iomanip>
#include <iostream>

class Contact{
    private :
        std::string first_name_;
        std::string last_name_;
        std::string nick_name_;
        std::string phone_number_;
        std::string darkest_secret_;
        
    public : 
        Contact(void);
        void    addContact(const std::string strs);
        ~Contact();
}

#endif
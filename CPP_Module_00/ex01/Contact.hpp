/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:36:21 by junoh             #+#    #+#             */
/*   Updated: 2022/11/10 13:06:15 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


#include <iomanip>
#include <iostream>


// enum dataInfo {
//     F_NAME,
//     L_NAME,
//     N_NAME,
//     P_NUM,
//     D_SECRET
// };

class Contact{
    private :
        std::string first_name_;
        std::string last_name_;
        std::string nick_name_;
        std::string phone_number_;
        std::string darkest_secret_;
        
    public : 
        Contact(void);
        void setFirstName(std::string str);
        void setLastName(std::string str);
        void setNickName(std::string str);
        void setPhoneNumber(std::string str);
        void setDarkestSecret(std::string str);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickName(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
        ~Contact();
};

#endif
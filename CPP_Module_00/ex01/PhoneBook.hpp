/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:32:40 by junoh             #+#    #+#             */
/*   Updated: 2022/11/09 15:51:19 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string.h>
#include <iomanip>
#include <iostream>
#include <sstream>

class PhoneBook
{
    private :
        int cnt_;
        int idx_;
         
    public :
        void    add(void);
        void    search(void);      
        
};

# endif
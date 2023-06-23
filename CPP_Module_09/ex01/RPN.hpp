/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:26:22 by junoh             #+#    #+#             */
/*   Updated: 2023/06/23 18:38:14 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>
#include <deque>

class RPN: public std::stack<int>{
    public:
        RPN(void);
        RPN(const RPN& copy);
        RPN& operator=(const RPN& src);
        ~RPN();
};

int isVaildNum(char c);
int isVaildOperation(char c);
int calculateNum(RPN& stack ,std::deque<char>& buffer);
int getNum(RPN& stack);
char getOperation(std::deque<char>& buffer);
#endif
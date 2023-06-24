/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:26:22 by junoh             #+#    #+#             */
/*   Updated: 2023/06/25 01:05:36 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>

class RPN: public std::stack<int>{
    public:
        RPN(void);
        RPN(const RPN& copy);
        RPN& operator=(const RPN& src);
        ~RPN();
};

int isVaildNum(char c);
int isVaildOperation(char c);
int calculateNum(RPN& stack ,std::stack<char>& buffer);
int getNum(RPN& stack);
char getOperation(std::stack<char>& buffer);
#endif
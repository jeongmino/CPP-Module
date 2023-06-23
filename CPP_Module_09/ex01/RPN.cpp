/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:46:45 by junoh             #+#    #+#             */
/*   Updated: 2023/06/23 18:44:39 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void): std::stack<int>(){}

RPN::~RPN(void){}

RPN::RPN(const RPN& copy): std::stack<int>(copy){}

RPN& RPN::operator=(const RPN& src){
    if (this != &src){
        std::stack<int>::operator=(src);
    }
    return *this;
}

int isVaildNum(char c){
    if (!isalnum(c)){
        return 0; 
    }
    int num = static_cast<int>(c);
    if (num < 0 || num > 10){
        std::cout << "Error" << std::endl;
        exit(1);
    }
    return 1;
}

int isVaildOperation(char c){
    if (c == '+' || c == '-' || c == '*' || c == '/'){
        return 1;
    }
    return 0;
}

int calculateNum(RPN& stack ,std::deque<char>& buffer){
    int firstOp;
    int secondOp;
    int ret;
    char op;

    op = getOperation(buffer);
    firstOp = getValue(stack);
    secondOp = getValue(stack);

    switch (op)
    {
        case "+":
            ret = firstOp + secondOp;
            break;
        case "-":
            ret = firstOp - secondOp;
            break;
        case "*":
            ret = firstOp * secondOp;
            break;
        case "/":
            if (secondOp == 0){
                std::cout << "Error: the second Operand is zero" << std::endl;
                exit(1);
            }
            ret = firstOp / secondOp;
            break;
    }
    return ret;
}

int getNum(RPN& stack){
    int ret;

    if (!stack.empty()){
        ret = stack.top();
        stack.pop();
    }
    else{
        std::cout << "Error" << std::endl;
        exit(1);
    }
    return ret;
}

char getOperation(std::deque<char>& buffer){
    char ret;
    
    if (!buffer.empty()){
        ret = buffer.front();
        buffer.pop_front();
    }
      else{
        std::cout << "Error" << std::endl;
        exit(1);
    }
    return ret;
}

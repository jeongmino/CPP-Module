/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:46:45 by junoh             #+#    #+#             */
/*   Updated: 2023/06/27 21:24:51 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void){}

RPN::~RPN(void){}

RPN::RPN(const RPN& copy){
    this->stack_ = copy.stack_;
}

RPN& RPN::operator=(const RPN& src){
    if (this != &src) {
        this->stack_ = src.stack_;
    }
    return *this;
}

std::stack<int>& RPN::getStack() {
    return this->stack_;
}

int isVaildNum(char c){
    if (!isalnum(c)){
        return 0; 
    }
    int num = static_cast<int>(c);
    if (num < 0 || num > 10){
        std::cout << "Error: out of range: " << num <<  std::endl;
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

int calculateNum(RPN& rpn ,std::stack<char>& buffer){
    int firstOp;
    int secondOp;
    int ret;
    char op;

    op = getOperation(buffer);
    secondOp = getNum(rpn);
    firstOp = getNum(rpn);

    switch (op)
    {
        case '+':
            ret = firstOp + secondOp;
            break;
        case '-':
            ret = firstOp - secondOp;
            break;
        case '*':
            ret = firstOp * secondOp;
            break;
        case '/':
            if (secondOp == 0){
                std::cout << "Error: the second Operand is zero" << std::endl;
                exit(1);
            }
            ret = firstOp / secondOp;
            break;
    }
    return ret;
}

int getNum(RPN& rpn){
    int ret = 0;

    if (!rpn.getStack().empty()){
        ret = rpn.getStack().top();
        rpn.getStack().pop();
    }
    return ret;
}

char getOperation(std::stack<char>& buffer){
    char ret;
    
    ret = buffer.top();
    return ret;
}

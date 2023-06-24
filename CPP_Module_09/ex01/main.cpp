/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:13:28 by junoh             #+#    #+#             */
/*   Updated: 2023/06/25 01:04:15 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static std::stack<char> makeToken(std::string str){
    std::reverse(str.begin(), str.end());

    std::stringstream ss(str);

    std::stack<char> tokens;
    std::string token;
    while (std::getline(ss, token, ' ')) {
         if (token.length() == 1){
            tokens.push(token[0]);
        }
        else{
            std::cout << "Error : not a number: " << token << std::endl;
            exit(1);
        }
    }
    return tokens;
}

int main(int argc, char *argv[])
{
    if (argc != 2){
        std::cout << "Error : Wrong argument number" << std::endl;
        return 1;
    }

    RPN rpn;
    std::stack<char> buffer;
    int ret;

    buffer = makeToken(std::string(argv[1]));
    while (!buffer.empty()){
        if (isVaildOperation(buffer.top())){
            ret = calculateNum(rpn, buffer);
            rpn.push(ret);
        }
        else{
            rpn.push(static_cast<int>(buffer.top()) - 48);
        }
        buffer.pop();
    }
    std::cout << rpn.top() <<std::endl;
}
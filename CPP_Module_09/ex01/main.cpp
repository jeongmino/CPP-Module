/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:13:28 by junoh             #+#    #+#             */
/*   Updated: 2023/06/23 21:28:08 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static std::deque<char> makeToken(std::string str){
    std::stringstream ss(str);

    std::deque<char> tokens;
    std::string token;
    while (std::getline(ss, token, ' ')) {
         if (token.length() == 1){
            tokens.push_back(token[0]);
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
    std::deque<char> buffer;
    int ret;

    buffer = makeToken(std::string(argv[1]));
    while (!buffer.empty()){
        if (isVaildOperation(buffer.front())){
            ret = calculateNum(rpn, buffer);
            rpn.push(ret);
        }
        else{
            rpn.push(static_cast<int>(buffer.front()) - 48);
        }
        buffer.pop_front();
    }
    std::cout << rpn.top() <<std::endl;
}
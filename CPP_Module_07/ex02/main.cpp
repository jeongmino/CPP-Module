/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:00:40 by junoh             #+#    #+#             */
/*   Updated: 2022/12/01 12:48:22 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
    try{
        Array<int> intArr(10);
        Array<float> floatArr(10);
        Array<std::string> stringArr(3);

        std::cout << "\n************ IntArr ****************" << std::endl;
        for (unsigned int i = 0; i < intArr.size(); i++)
        {
            intArr[i] = i * 2;
        }
        for (unsigned int i = 0; i < intArr.size(); i++)
        {
            std::cout << "this array has a : " <<intArr[i] << std::endl;
        }
        std::cout << "\n************ floatArr ****************" << std::endl;
        for (unsigned int i = 0; i < floatArr.size(); i++)
        {
            floatArr[i] = i * 2.2;
        }
        for (unsigned int i = 0; i < floatArr.size(); i++)
        {
            std::cout << "this array has a : " <<floatArr[i] << std::endl;
        }
        std::cout << "\n************ floatArr ****************" << std::endl;
        stringArr[0] = "apple";
        stringArr[1] = "banana";
        stringArr[3] = "asd";
        stringArr[2] = "grape";
        for (unsigned int i = 0; i < stringArr.size(); i++)
        {
            std::cout << "this array has a : " << stringArr[i] << std::endl;
        }
    }catch (std::exception &e){
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
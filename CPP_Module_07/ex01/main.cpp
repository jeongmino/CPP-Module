/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:17:09 by junoh             #+#    #+#             */
/*   Updated: 2022/12/03 00:55:26 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template<typename T>
void Show(const T &A)
{
    std::cout << "this is a : " << A << std::endl;
    return ;
}

int main(void)
{
    int intArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::string strArr[] = {"apple", "banana", "grape", "kiwi", "orange", "mango"};
    double doubleArr[] = {13.1, 123.415, 126.75, 2.7745};
    
    iter(intArr, 10, Show);
    iter(strArr, 6, Show);
    iter(doubleArr, 4, Show);   
}


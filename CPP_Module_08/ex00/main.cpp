/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 01:35:05 by junoh             #+#    #+#             */
/*   Updated: 2022/12/03 01:41:33 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"
#include <iostream>

int main(void)
{
    int num = 0;
    std::vector<int> i_vector(10);
    for (std::vector<int>::iterator i = i_vector.begin(); i != i_vector.end(); i++)
    {
        *i = num;
        num++;
    }
    try{
        std::cout << easyFind(i_vector, 5) << std::endl;
    }catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    }
}
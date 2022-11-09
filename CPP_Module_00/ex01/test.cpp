/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:42:36 by junoh             #+#    #+#             */
/*   Updated: 2022/10/21 18:41:45 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main(void)
{
    std::cout << std::right << std::setw(10) << "junoh" << std::endl;
    std::cout << "middle" << std::endl;
    std::cout << std::left << std::setw(10) << "hong_01" << std::endl;
    
    return 0;
}
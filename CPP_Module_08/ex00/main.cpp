/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 01:35:05 by junoh             #+#    #+#             */
/*   Updated: 2022/12/03 20:02:47 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"
#include <iostream>

int main()
{
	int i = 0;
	std::vector<int> c(10);
	std::vector<int>::iterator it;
	for (it = c.begin(); it != c.end(); it++)
	{
		*it = i;
		i++;
	}
	try
	{
		std::cout << easyfind(c, 5) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 02:07:33 by junoh             #+#    #+#             */
/*   Updated: 2022/11/11 02:17:15 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::cout << "\n@@@@@@@@@@@@ DEBUG @@@@@@@@@@@@\n" << std::endl;
	harl.complain("DEBUG");
	std::cout << "\n@@@@@@@@@@@@ INFO @@@@@@@@@@@@\n" << std::endl;
	harl.complain("INFO");
	std::cout << "\n@@@@@@@@@@@@ WARNING @@@@@@@@@@@@\n" << std::endl;
	harl.complain("WARNING");
	std::cout << "\n@@@@@@@@@@@@ ERROR @@@@@@@@@@@@\n" << std::endl;
	harl.complain("ERROR");
	std::cout << "\n@@@@@@@@@@@@ EXCEPTION @@@@@@@@@@@@\n" << std::endl;
	harl.complain("asdawaasfawijoaisjoidjawoidmska");
    std::cout <<std::endl;
}
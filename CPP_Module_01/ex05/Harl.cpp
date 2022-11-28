/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 02:01:03 by junoh             #+#    #+#             */
/*   Updated: 2022/11/21 11:29:42 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    return ;
}

void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more!" << std::endl;
    return ;
}

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
    return ;
}

void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    return ;
}

void Harl::exception(void){
    std::cout << "Not a Harl message!" << std::endl;
    return ;
}

void Harl::complain(std::string level){
    void		(Harl::*f[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::exception};
	std::string	command[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = -1;
    while (++i < 4 && level != command[i])
        ;
    (this->*f[i])();
    return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:58:11 by junoh             #+#    #+#             */
/*   Updated: 2022/11/21 10:57:11 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "\n@@@@@@@@@@@@@@@ Create @@@@@@@@@@@@@@@\n" << std::endl;
    Zombie justZombie("justZombie");
    Zombie* heapZombie = newZombie("heapZombie");
    
    std::cout << "\n@@@@@@@@@@@@@@@ Announce @@@@@@@@@@@@@@@\n" << std::endl;
    heapZombie->announce();
    justZombie.announce();
    randomChump("ramdomZombie");
    std::cout << "\n@@@@@@@@@@@@@@@ Delete @@@@@@@@@@@@@@@\n" << std::endl;
    delete heapZombie;
    return (0);
}
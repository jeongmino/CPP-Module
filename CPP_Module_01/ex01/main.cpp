/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:30:31 by junoh             #+#    #+#             */
/*   Updated: 2022/11/10 15:38:13 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "\nZombies are comming for us!!\n" << std::endl;
    
    Zombie* hordeOfZomibe = zombieHorde(5, "Zombie");
    for (int i = 0; i < 5; i++){
        hordeOfZomibe[i].announce();
    }

    std::cout << "\nZombies are dying...\n" << std::endl;

    delete[] (hordeOfZomibe);
    std::cout << "\nZombies are gone...\n" << std::endl;
    return (0);
}
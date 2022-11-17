/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:07:37 by junoh             #+#    #+#             */
/*   Updated: 2022/11/17 20:57:28 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int main(void)
{
    ClapTrap ironMan("IronMan");
    ClapTrap batMan("BatMan");

    ironMan.setAttackDamage(7);
    batMan.setAttackDamage(7);

    ironMan.attack("batMan");
    batMan.takeDamage(ironMan.getAttackDamage());

    batMan.attack("IronMan");
    ironMan.takeDamage(batMan.getAttackDamage());

    std::cout << ironMan << std::endl << batMan << std::endl;

    ironMan.beRepaired(5);

    std::cout << ironMan << std::endl << batMan << std::endl;

    ironMan.attack("batMan");
    batMan.takeDamage(ironMan.getAttackDamage());

    batMan.attack("IronMan");
    ironMan.takeDamage(batMan.getAttackDamage());

    std::cout << ironMan << std::endl << batMan << std::endl;
}
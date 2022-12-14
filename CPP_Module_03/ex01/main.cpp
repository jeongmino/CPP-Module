/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:07:37 by junoh             #+#    #+#             */
/*   Updated: 2022/11/18 11:45:13 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap ironMan("IronMan");
    ClapTrap batMan("BatMan");
    ScavTrap spiderMan("SpiderMan");
    
    
    ironMan.setAttackDamage(7);
    batMan.setAttackDamage(7);

    ironMan.attack("SpiderMan");
    spiderMan.takeDamage(ironMan.getAttackDamage());

    batMan.attack("SpiderMan");
    spiderMan.takeDamage(batMan.getAttackDamage());

    std::cout <<spiderMan << std::endl;

    spiderMan.guardGate();

    spiderMan.attack("batMan");
    batMan.takeDamage(spiderMan.getAttackDamage());

    spiderMan.attack("IronMan");
    ironMan.takeDamage(spiderMan.getAttackDamage());

    std::cout << ironMan << std::endl << batMan << std::endl << spiderMan << std::endl;
}
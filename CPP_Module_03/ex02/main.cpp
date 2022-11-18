/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:07:37 by junoh             #+#    #+#             */
/*   Updated: 2022/11/18 12:41:47 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    ClapTrap ironMan("IronMan");
    ClapTrap batMan("BatMan");
    FragTrap thor("Thor");
    
    
    ironMan.setAttackDamage(7);
    batMan.setAttackDamage(7);

    ironMan.attack("SpiderMan");
    thor.takeDamage(ironMan.getAttackDamage());

    batMan.attack("SpiderMan");
    thor.takeDamage(batMan.getAttackDamage());

    std::cout << thor << std::endl;

    thor.highFivesGuys();

    thor.attack("batMan");
    batMan.takeDamage(thor.getAttackDamage());

    thor.attack("IronMan");
    ironMan.takeDamage(thor.getAttackDamage());

    std::cout << ironMan << std::endl << batMan << std::endl << thor << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomZombie.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:15:54 by junoh             #+#    #+#             */
/*   Updated: 2022/11/10 14:19:23 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump(std::string name){

    Zombie stack_zombie(name);

    stack_zombie.announce();
}
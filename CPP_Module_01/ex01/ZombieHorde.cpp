/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:06:49 by junoh             #+#    #+#             */
/*   Updated: 2022/11/10 17:06:34 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    
    if (N < 1){
        return (NULL);
    }
    Zombie* zombies = new Zombie[N];
    std::stringstream idx;
    for (int i = 0; i < N; i++){
        idx << i;
        zombies[i].setName(name + idx.str() + "th");
        idx.str(std::string());
    }
    return (zombies);
}

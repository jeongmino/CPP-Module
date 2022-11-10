/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:58:20 by junoh             #+#    #+#             */
/*   Updated: 2022/11/10 14:46:54 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
    
    private :
        std::string name_;
    
    public :
        Zombie(std::string name);
        std::string    getName(void); 
        void    setName(std::string name);
        void    announce(void);
        ~Zombie();
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);          

#endif

// clang++ -Wall -Wextra -Werror -std=c++98 newZombie.cpp randomZombie.cpp Zombie.cpp main.cpp Zombie.hpp -o Zombie
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:58:20 by junoh             #+#    #+#             */
/*   Updated: 2022/11/10 15:27:29 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <sstream>

class Zombie{
    
    private :
        std::string name_;
    
    public :
        Zombie();
        Zombie(std::string name);
        std::string    getName(void); 
        void    setName(std::string name);
        void    announce(void);
        ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:19:54 by junoh             #+#    #+#             */
/*   Updated: 2022/11/10 17:30:13 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
    
    private :
        std::string name_;
        Weapon& weapon_;

    public :
        HumanB(std::string name);
        void        setName(std::string name);
        void        setWeapon(Weapon& weapon);
        std::string getName(void) const;
        Weapon      getWeapon(void) const;
        void        attack(void);
        ~HumanB();                
};

#endif
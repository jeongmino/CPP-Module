/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:19:54 by junoh             #+#    #+#             */
/*   Updated: 2022/11/10 17:27:45 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    
    private :
        std::string name_;
        Weapon& weapon_;

    public :
        HumanA(std::string name, Weapon& weapon);
        void    setName(std::string name);
        void    setWeapon(Weapon& weapon);
        std::string getName(void) const;
        Weapon      getWeapon(void) const;
        void    attack(void);
        ~HumanA();                
};

#endif
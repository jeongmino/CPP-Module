/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:15:29 by junoh             #+#    #+#             */
/*   Updated: 2022/11/11 01:55:52 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>


class Weapon{

    private :
        std::string type_;

    public :
        Weapon(std::string type);
        std::string getType(void) const;
        void    setType(std::string type);
        ~Weapon();
};

#endif
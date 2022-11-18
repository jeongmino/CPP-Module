/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:00:21 by junoh             #+#    #+#             */
/*   Updated: 2022/11/18 12:06:56 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& copy);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();
        
        void highFivesGuys(void);       
};

std::ostream& operator<<(std::ostream& os, const FragTrap& frag);
#endif
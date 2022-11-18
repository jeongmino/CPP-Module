/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:00:21 by junoh             #+#    #+#             */
/*   Updated: 2022/11/18 11:32:04 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();
        
        void guardGate(void);       
};

std::ostream& operator<<(std::ostream& os, const ScavTrap& scav);
#endif
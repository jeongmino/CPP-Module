/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:09:44 by junoh             #+#    #+#             */
/*   Updated: 2022/11/17 15:29:39 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class Claptrap{
    
    private :
        std::string name_;    
        int hit_point_;
        int energe_point_;
        int attack_damage_;
    public :
        Claptrap(std::string name);
        Claptrap(const Claptrap& copy);
        Claptrap& operator=(const Claptrap& other);
        ~Claptrap();

    /********* Required function **********/
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

    /********* Getter function **********/
    std::string getName(void) const;
    int         getHitPoint(void) const;
    int         getEnergyPoint(void) const;
    int         getAttackDamage(void) const;
    
    /********* Setter function **********/
    void        setName(const std::string name);
    void        setHitPoint(int hit_point);
    void        setEnergyPoint(int energy_point);
    void        setAttackDamage(int attack_damage);
    
};

static std::ostream& operator<<(std::ostream& os, const Claptrap& clap);

#endif
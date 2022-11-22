/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:07:57 by junoh             #+#    #+#             */
/*   Updated: 2022/11/22 16:30:44 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{    
    protected : 
        std::string type_;

    public :
        Animal(void);
        Animal(const Animal& copy);
        Animal& operator=(const Animal& other);
        void setType(std::string type);
        std::string getType(void) const;
        virtual ~Animal();
        
    public :
        virtual void makeSound(void) const = 0;
};

#endif 

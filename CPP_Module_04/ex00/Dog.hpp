/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:04:57 by junoh             #+#    #+#             */
/*   Updated: 2022/11/19 23:56:15 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog(void);
        Dog(const Dog& copy);
        Dog& operator=(const Dog& other);
        std::string getType(void) const;
        ~Dog();
    public :
        void makeSound(void) const;    
};

#endif
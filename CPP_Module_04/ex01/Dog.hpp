/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:04:57 by junoh             #+#    #+#             */
/*   Updated: 2022/11/20 00:48:43 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain *brain_; 

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
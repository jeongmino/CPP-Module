/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:17:18 by junoh             #+#    #+#             */
/*   Updated: 2022/11/22 14:41:43 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{ 
    public :
        Cat(void);
        Cat(const Cat& copy);
        Cat& operator=(const Cat& other);
        std::string getType(void) const;
        ~Cat(void);
    public :
        void makeSound(void) const;
};

#endif